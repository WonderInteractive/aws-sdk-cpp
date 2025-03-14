﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mturk-requester/MTurk_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/mturk-requester/MTurkServiceClientModel.h>
#include <smithy/client/AwsSmithyClient.h>
#include <smithy/identity/auth/built-in/SigV4AuthSchemeResolver.h>
#include <smithy/identity/auth/built-in/SigV4AuthScheme.h>
#include <smithy/client/serializer/JsonOutcomeSerializer.h>
#include <aws/mturk-requester/MTurkErrorMarshaller.h>

namespace Aws
{
namespace MTurk
{
  AWS_MTURK_API extern const char SERVICE_NAME[];
  /**
   * <fullname>Amazon Mechanical Turk API Reference</fullname>
   */
  class AWS_MTURK_API MTurkClient : smithy::client::AwsSmithyClientT<Aws::MTurk::SERVICE_NAME,
      Aws::MTurk::MTurkClientConfiguration,
      smithy::SigV4AuthSchemeResolver<>,
      Aws::Crt::Variant<smithy::SigV4AuthScheme>,
      MTurkEndpointProviderBase,
      smithy::client::JsonOutcomeSerializer,
      smithy::client::JsonOutcome,
      Aws::Client::MTurkErrorMarshaller>,
    Aws::Client::ClientWithAsyncTemplateMethods<MTurkClient>
  {
    public:
      static const char* GetServiceName();
      static const char* GetAllocationTag();
      inline const char* GetServiceClientName() const override { return "MTurk"; }

      typedef MTurkClientConfiguration ClientConfigurationType;
      typedef MTurkEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MTurkClient(const Aws::MTurk::MTurkClientConfiguration& clientConfiguration = Aws::MTurk::MTurkClientConfiguration(),
                    std::shared_ptr<MTurkEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MTurkClient(const Aws::Auth::AWSCredentials& credentials,
                    std::shared_ptr<MTurkEndpointProviderBase> endpointProvider = nullptr,
                    const Aws::MTurk::MTurkClientConfiguration& clientConfiguration = Aws::MTurk::MTurkClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MTurkClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                    std::shared_ptr<MTurkEndpointProviderBase> endpointProvider = nullptr,
                    const Aws::MTurk::MTurkClientConfiguration& clientConfiguration = Aws::MTurk::MTurkClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MTurkClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MTurkClient(const Aws::Auth::AWSCredentials& credentials,
                    const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MTurkClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                    const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~MTurkClient();

        /**
         * <p> The <code>AcceptQualificationRequest</code> operation approves a Worker's
         * request for a Qualification. </p> <p> Only the owner of the Qualification type
         * can grant a Qualification request for that type. </p> <p> A successful request
         * for the <code>AcceptQualificationRequest</code> operation returns with no errors
         * and an empty body. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/AcceptQualificationRequest">AWS
         * API Reference</a></p>
         */
        virtual Model::AcceptQualificationRequestOutcome AcceptQualificationRequest(const Model::AcceptQualificationRequestRequest& request) const;

        /**
         * A Callable wrapper for AcceptQualificationRequest that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AcceptQualificationRequestRequestT = Model::AcceptQualificationRequestRequest>
        Model::AcceptQualificationRequestOutcomeCallable AcceptQualificationRequestCallable(const AcceptQualificationRequestRequestT& request) const
        {
            return SubmitCallable(&MTurkClient::AcceptQualificationRequest, request);
        }

        /**
         * An Async wrapper for AcceptQualificationRequest that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AcceptQualificationRequestRequestT = Model::AcceptQualificationRequestRequest>
        void AcceptQualificationRequestAsync(const AcceptQualificationRequestRequestT& request, const AcceptQualificationRequestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MTurkClient::AcceptQualificationRequest, request, handler, context);
        }

        /**
         * <p> The <code>ApproveAssignment</code> operation approves the results of a
         * completed assignment. </p> <p> Approving an assignment initiates two payments
         * from the Requester's Amazon.com account </p> <ul> <li> <p> The Worker who
         * submitted the results is paid the reward specified in the HIT. </p> </li> <li>
         * <p> Amazon Mechanical Turk fees are debited. </p> </li> </ul> <p> If the
         * Requester's account does not have adequate funds for these payments, the call to
         * ApproveAssignment returns an exception, and the approval is not processed. You
         * can include an optional feedback message with the approval, which the Worker can
         * see in the Status section of the web site. </p> <p> You can also call this
         * operation for assignments that were previous rejected and approve them by
         * explicitly overriding the previous rejection. This only works on rejected
         * assignments that were submitted within the previous 30 days and only if the
         * assignment's related HIT has not been deleted. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/ApproveAssignment">AWS
         * API Reference</a></p>
         */
        virtual Model::ApproveAssignmentOutcome ApproveAssignment(const Model::ApproveAssignmentRequest& request) const;

        /**
         * A Callable wrapper for ApproveAssignment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ApproveAssignmentRequestT = Model::ApproveAssignmentRequest>
        Model::ApproveAssignmentOutcomeCallable ApproveAssignmentCallable(const ApproveAssignmentRequestT& request) const
        {
            return SubmitCallable(&MTurkClient::ApproveAssignment, request);
        }

        /**
         * An Async wrapper for ApproveAssignment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ApproveAssignmentRequestT = Model::ApproveAssignmentRequest>
        void ApproveAssignmentAsync(const ApproveAssignmentRequestT& request, const ApproveAssignmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MTurkClient::ApproveAssignment, request, handler, context);
        }

        /**
         * <p> The <code>AssociateQualificationWithWorker</code> operation gives a Worker a
         * Qualification. <code>AssociateQualificationWithWorker</code> does not require
         * that the Worker submit a Qualification request. It gives the Qualification
         * directly to the Worker. </p> <p> You can only assign a Qualification of a
         * Qualification type that you created (using the
         * <code>CreateQualificationType</code> operation). </p>  <p> Note:
         * <code>AssociateQualificationWithWorker</code> does not affect any pending
         * Qualification requests for the Qualification by the Worker. If you assign a
         * Qualification to a Worker, then later grant a Qualification request made by the
         * Worker, the granting of the request may modify the Qualification score. To
         * resolve a pending Qualification request without affecting the Qualification the
         * Worker already has, reject the request with the
         * <code>RejectQualificationRequest</code> operation. </p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/AssociateQualificationWithWorker">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateQualificationWithWorkerOutcome AssociateQualificationWithWorker(const Model::AssociateQualificationWithWorkerRequest& request) const;

        /**
         * A Callable wrapper for AssociateQualificationWithWorker that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociateQualificationWithWorkerRequestT = Model::AssociateQualificationWithWorkerRequest>
        Model::AssociateQualificationWithWorkerOutcomeCallable AssociateQualificationWithWorkerCallable(const AssociateQualificationWithWorkerRequestT& request) const
        {
            return SubmitCallable(&MTurkClient::AssociateQualificationWithWorker, request);
        }

        /**
         * An Async wrapper for AssociateQualificationWithWorker that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateQualificationWithWorkerRequestT = Model::AssociateQualificationWithWorkerRequest>
        void AssociateQualificationWithWorkerAsync(const AssociateQualificationWithWorkerRequestT& request, const AssociateQualificationWithWorkerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MTurkClient::AssociateQualificationWithWorker, request, handler, context);
        }

        /**
         * <p> The <code>CreateAdditionalAssignmentsForHIT</code> operation increases the
         * maximum number of assignments of an existing HIT. </p> <p> To extend the maximum
         * number of assignments, specify the number of additional assignments.</p> 
         * <ul> <li> <p>HITs created with fewer than 10 assignments cannot be extended to
         * have 10 or more assignments. Attempting to add assignments in a way that brings
         * the total number of assignments for a HIT from fewer than 10 assignments to 10
         * or more assignments will result in an
         * <code>AWS.MechanicalTurk.InvalidMaximumAssignmentsIncrease</code> exception.</p>
         * </li> <li> <p>HITs that were created before July 22, 2015 cannot be extended.
         * Attempting to extend HITs that were created before July 22, 2015 will result in
         * an <code>AWS.MechanicalTurk.HITTooOldForExtension</code> exception. </p> </li>
         * </ul> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/CreateAdditionalAssignmentsForHIT">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAdditionalAssignmentsForHITOutcome CreateAdditionalAssignmentsForHIT(const Model::CreateAdditionalAssignmentsForHITRequest& request) const;

        /**
         * A Callable wrapper for CreateAdditionalAssignmentsForHIT that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateAdditionalAssignmentsForHITRequestT = Model::CreateAdditionalAssignmentsForHITRequest>
        Model::CreateAdditionalAssignmentsForHITOutcomeCallable CreateAdditionalAssignmentsForHITCallable(const CreateAdditionalAssignmentsForHITRequestT& request) const
        {
            return SubmitCallable(&MTurkClient::CreateAdditionalAssignmentsForHIT, request);
        }

        /**
         * An Async wrapper for CreateAdditionalAssignmentsForHIT that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateAdditionalAssignmentsForHITRequestT = Model::CreateAdditionalAssignmentsForHITRequest>
        void CreateAdditionalAssignmentsForHITAsync(const CreateAdditionalAssignmentsForHITRequestT& request, const CreateAdditionalAssignmentsForHITResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MTurkClient::CreateAdditionalAssignmentsForHIT, request, handler, context);
        }

        /**
         * <p>The <code>CreateHIT</code> operation creates a new Human Intelligence Task
         * (HIT). The new HIT is made available for Workers to find and accept on the
         * Amazon Mechanical Turk website. </p> <p> This operation allows you to specify a
         * new HIT by passing in values for the properties of the HIT, such as its title,
         * reward amount and number of assignments. When you pass these values to
         * <code>CreateHIT</code>, a new HIT is created for you, with a new
         * <code>HITTypeID</code>. The HITTypeID can be used to create additional HITs in
         * the future without needing to specify common parameters such as the title,
         * description and reward amount each time.</p> <p> An alternative way to create
         * HITs is to first generate a HITTypeID using the <code>CreateHITType</code>
         * operation and then call the <code>CreateHITWithHITType</code> operation. This is
         * the recommended best practice for Requesters who are creating large numbers of
         * HITs. </p> <p>CreateHIT also supports several ways to provide question data: by
         * providing a value for the <code>Question</code> parameter that fully specifies
         * the contents of the HIT, or by providing a <code>HitLayoutId</code> and
         * associated <code>HitLayoutParameters</code>. </p>  <p> If a HIT is created
         * with 10 or more maximum assignments, there is an additional fee. For more
         * information, see <a href="https://requester.mturk.com/pricing">Amazon Mechanical
         * Turk Pricing</a>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/CreateHIT">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateHITOutcome CreateHIT(const Model::CreateHITRequest& request) const;

        /**
         * A Callable wrapper for CreateHIT that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateHITRequestT = Model::CreateHITRequest>
        Model::CreateHITOutcomeCallable CreateHITCallable(const CreateHITRequestT& request) const
        {
            return SubmitCallable(&MTurkClient::CreateHIT, request);
        }

        /**
         * An Async wrapper for CreateHIT that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateHITRequestT = Model::CreateHITRequest>
        void CreateHITAsync(const CreateHITRequestT& request, const CreateHITResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MTurkClient::CreateHIT, request, handler, context);
        }

        /**
         * <p> The <code>CreateHITType</code> operation creates a new HIT type. This
         * operation allows you to define a standard set of HIT properties to use when
         * creating HITs. If you register a HIT type with values that match an existing HIT
         * type, the HIT type ID of the existing type will be returned. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/CreateHITType">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateHITTypeOutcome CreateHITType(const Model::CreateHITTypeRequest& request) const;

        /**
         * A Callable wrapper for CreateHITType that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateHITTypeRequestT = Model::CreateHITTypeRequest>
        Model::CreateHITTypeOutcomeCallable CreateHITTypeCallable(const CreateHITTypeRequestT& request) const
        {
            return SubmitCallable(&MTurkClient::CreateHITType, request);
        }

        /**
         * An Async wrapper for CreateHITType that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateHITTypeRequestT = Model::CreateHITTypeRequest>
        void CreateHITTypeAsync(const CreateHITTypeRequestT& request, const CreateHITTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MTurkClient::CreateHITType, request, handler, context);
        }

        /**
         * <p> The <code>CreateHITWithHITType</code> operation creates a new Human
         * Intelligence Task (HIT) using an existing HITTypeID generated by the
         * <code>CreateHITType</code> operation. </p> <p> This is an alternative way to
         * create HITs from the <code>CreateHIT</code> operation. This is the recommended
         * best practice for Requesters who are creating large numbers of HITs. </p>
         * <p>CreateHITWithHITType also supports several ways to provide question data: by
         * providing a value for the <code>Question</code> parameter that fully specifies
         * the contents of the HIT, or by providing a <code>HitLayoutId</code> and
         * associated <code>HitLayoutParameters</code>. </p>  <p> If a HIT is created
         * with 10 or more maximum assignments, there is an additional fee. For more
         * information, see <a href="https://requester.mturk.com/pricing">Amazon Mechanical
         * Turk Pricing</a>. </p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/CreateHITWithHITType">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateHITWithHITTypeOutcome CreateHITWithHITType(const Model::CreateHITWithHITTypeRequest& request) const;

        /**
         * A Callable wrapper for CreateHITWithHITType that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateHITWithHITTypeRequestT = Model::CreateHITWithHITTypeRequest>
        Model::CreateHITWithHITTypeOutcomeCallable CreateHITWithHITTypeCallable(const CreateHITWithHITTypeRequestT& request) const
        {
            return SubmitCallable(&MTurkClient::CreateHITWithHITType, request);
        }

        /**
         * An Async wrapper for CreateHITWithHITType that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateHITWithHITTypeRequestT = Model::CreateHITWithHITTypeRequest>
        void CreateHITWithHITTypeAsync(const CreateHITWithHITTypeRequestT& request, const CreateHITWithHITTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MTurkClient::CreateHITWithHITType, request, handler, context);
        }

        /**
         * <p> The <code>CreateQualificationType</code> operation creates a new
         * Qualification type, which is represented by a <code>QualificationType</code>
         * data structure. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/CreateQualificationType">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateQualificationTypeOutcome CreateQualificationType(const Model::CreateQualificationTypeRequest& request) const;

        /**
         * A Callable wrapper for CreateQualificationType that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateQualificationTypeRequestT = Model::CreateQualificationTypeRequest>
        Model::CreateQualificationTypeOutcomeCallable CreateQualificationTypeCallable(const CreateQualificationTypeRequestT& request) const
        {
            return SubmitCallable(&MTurkClient::CreateQualificationType, request);
        }

        /**
         * An Async wrapper for CreateQualificationType that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateQualificationTypeRequestT = Model::CreateQualificationTypeRequest>
        void CreateQualificationTypeAsync(const CreateQualificationTypeRequestT& request, const CreateQualificationTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MTurkClient::CreateQualificationType, request, handler, context);
        }

        /**
         * <p>The <code>CreateWorkerBlock</code> operation allows you to prevent a Worker
         * from working on your HITs. For example, you can block a Worker who is producing
         * poor quality work. You can block up to 100,000 Workers.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/CreateWorkerBlock">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateWorkerBlockOutcome CreateWorkerBlock(const Model::CreateWorkerBlockRequest& request) const;

        /**
         * A Callable wrapper for CreateWorkerBlock that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateWorkerBlockRequestT = Model::CreateWorkerBlockRequest>
        Model::CreateWorkerBlockOutcomeCallable CreateWorkerBlockCallable(const CreateWorkerBlockRequestT& request) const
        {
            return SubmitCallable(&MTurkClient::CreateWorkerBlock, request);
        }

        /**
         * An Async wrapper for CreateWorkerBlock that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateWorkerBlockRequestT = Model::CreateWorkerBlockRequest>
        void CreateWorkerBlockAsync(const CreateWorkerBlockRequestT& request, const CreateWorkerBlockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MTurkClient::CreateWorkerBlock, request, handler, context);
        }

        /**
         * <p> The <code>DeleteHIT</code> operation is used to delete HIT that is no longer
         * needed. Only the Requester who created the HIT can delete it. </p> <p> You can
         * only dispose of HITs that are in the <code>Reviewable</code> state, with all of
         * their submitted assignments already either approved or rejected. If you call the
         * DeleteHIT operation on a HIT that is not in the <code>Reviewable</code> state
         * (for example, that has not expired, or still has active assignments), or on a
         * HIT that is Reviewable but without all of its submitted assignments already
         * approved or rejected, the service will return an error. </p>  <ul> <li>
         * <p> HITs are automatically disposed of after 120 days. </p> </li> <li> <p> After
         * you dispose of a HIT, you can no longer approve the HIT's rejected assignments.
         * </p> </li> <li> <p> Disposed HITs are not returned in results for the ListHITs
         * operation. </p> </li> <li> <p> Disposing HITs can improve the performance of
         * operations such as ListReviewableHITs and ListHITs. </p> </li> </ul>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/DeleteHIT">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteHITOutcome DeleteHIT(const Model::DeleteHITRequest& request) const;

        /**
         * A Callable wrapper for DeleteHIT that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteHITRequestT = Model::DeleteHITRequest>
        Model::DeleteHITOutcomeCallable DeleteHITCallable(const DeleteHITRequestT& request) const
        {
            return SubmitCallable(&MTurkClient::DeleteHIT, request);
        }

        /**
         * An Async wrapper for DeleteHIT that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteHITRequestT = Model::DeleteHITRequest>
        void DeleteHITAsync(const DeleteHITRequestT& request, const DeleteHITResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MTurkClient::DeleteHIT, request, handler, context);
        }

        /**
         * <p> The <code>DeleteQualificationType</code> deletes a Qualification type and
         * deletes any HIT types that are associated with the Qualification type. </p>
         * <p>This operation does not revoke Qualifications already assigned to Workers
         * because the Qualifications might be needed for active HITs. If there are any
         * pending requests for the Qualification type, Amazon Mechanical Turk rejects
         * those requests. After you delete a Qualification type, you can no longer use it
         * to create HITs or HIT types.</p>  <p>DeleteQualificationType must wait for
         * all the HITs that use the deleted Qualification type to be deleted before
         * completing. It may take up to 48 hours before DeleteQualificationType completes
         * and the unique name of the Qualification type is available for reuse with
         * CreateQualificationType.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/DeleteQualificationType">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteQualificationTypeOutcome DeleteQualificationType(const Model::DeleteQualificationTypeRequest& request) const;

        /**
         * A Callable wrapper for DeleteQualificationType that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteQualificationTypeRequestT = Model::DeleteQualificationTypeRequest>
        Model::DeleteQualificationTypeOutcomeCallable DeleteQualificationTypeCallable(const DeleteQualificationTypeRequestT& request) const
        {
            return SubmitCallable(&MTurkClient::DeleteQualificationType, request);
        }

        /**
         * An Async wrapper for DeleteQualificationType that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteQualificationTypeRequestT = Model::DeleteQualificationTypeRequest>
        void DeleteQualificationTypeAsync(const DeleteQualificationTypeRequestT& request, const DeleteQualificationTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MTurkClient::DeleteQualificationType, request, handler, context);
        }

        /**
         * <p>The <code>DeleteWorkerBlock</code> operation allows you to reinstate a
         * blocked Worker to work on your HITs. This operation reverses the effects of the
         * CreateWorkerBlock operation. You need the Worker ID to use this operation. If
         * the Worker ID is missing or invalid, this operation fails and returns the
         * message “WorkerId is invalid.” If the specified Worker is not blocked, this
         * operation returns successfully.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/DeleteWorkerBlock">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteWorkerBlockOutcome DeleteWorkerBlock(const Model::DeleteWorkerBlockRequest& request) const;

        /**
         * A Callable wrapper for DeleteWorkerBlock that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteWorkerBlockRequestT = Model::DeleteWorkerBlockRequest>
        Model::DeleteWorkerBlockOutcomeCallable DeleteWorkerBlockCallable(const DeleteWorkerBlockRequestT& request) const
        {
            return SubmitCallable(&MTurkClient::DeleteWorkerBlock, request);
        }

        /**
         * An Async wrapper for DeleteWorkerBlock that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteWorkerBlockRequestT = Model::DeleteWorkerBlockRequest>
        void DeleteWorkerBlockAsync(const DeleteWorkerBlockRequestT& request, const DeleteWorkerBlockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MTurkClient::DeleteWorkerBlock, request, handler, context);
        }

        /**
         * <p> The <code>DisassociateQualificationFromWorker</code> revokes a previously
         * granted Qualification from a user. </p> <p> You can provide a text message
         * explaining why the Qualification was revoked. The user who had the Qualification
         * can see this message. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/DisassociateQualificationFromWorker">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateQualificationFromWorkerOutcome DisassociateQualificationFromWorker(const Model::DisassociateQualificationFromWorkerRequest& request) const;

        /**
         * A Callable wrapper for DisassociateQualificationFromWorker that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisassociateQualificationFromWorkerRequestT = Model::DisassociateQualificationFromWorkerRequest>
        Model::DisassociateQualificationFromWorkerOutcomeCallable DisassociateQualificationFromWorkerCallable(const DisassociateQualificationFromWorkerRequestT& request) const
        {
            return SubmitCallable(&MTurkClient::DisassociateQualificationFromWorker, request);
        }

        /**
         * An Async wrapper for DisassociateQualificationFromWorker that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateQualificationFromWorkerRequestT = Model::DisassociateQualificationFromWorkerRequest>
        void DisassociateQualificationFromWorkerAsync(const DisassociateQualificationFromWorkerRequestT& request, const DisassociateQualificationFromWorkerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MTurkClient::DisassociateQualificationFromWorker, request, handler, context);
        }

        /**
         * <p>The <code>GetAccountBalance</code> operation retrieves the Prepaid HITs
         * balance in your Amazon Mechanical Turk account if you are a Prepaid Requester.
         * Alternatively, this operation will retrieve the remaining available AWS Billing
         * usage if you have enabled AWS Billing. Note: If you have enabled AWS Billing and
         * still have a remaining Prepaid HITs balance, this balance can be viewed on the
         * My Account page in the Requester console.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/GetAccountBalance">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAccountBalanceOutcome GetAccountBalance(const Model::GetAccountBalanceRequest& request = {}) const;

        /**
         * A Callable wrapper for GetAccountBalance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAccountBalanceRequestT = Model::GetAccountBalanceRequest>
        Model::GetAccountBalanceOutcomeCallable GetAccountBalanceCallable(const GetAccountBalanceRequestT& request = {}) const
        {
            return SubmitCallable(&MTurkClient::GetAccountBalance, request);
        }

        /**
         * An Async wrapper for GetAccountBalance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAccountBalanceRequestT = Model::GetAccountBalanceRequest>
        void GetAccountBalanceAsync(const GetAccountBalanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const GetAccountBalanceRequestT& request = {}) const
        {
            return SubmitAsync(&MTurkClient::GetAccountBalance, request, handler, context);
        }

        /**
         * <p> The <code>GetAssignment</code> operation retrieves the details of the
         * specified Assignment. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/GetAssignment">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAssignmentOutcome GetAssignment(const Model::GetAssignmentRequest& request) const;

        /**
         * A Callable wrapper for GetAssignment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAssignmentRequestT = Model::GetAssignmentRequest>
        Model::GetAssignmentOutcomeCallable GetAssignmentCallable(const GetAssignmentRequestT& request) const
        {
            return SubmitCallable(&MTurkClient::GetAssignment, request);
        }

        /**
         * An Async wrapper for GetAssignment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAssignmentRequestT = Model::GetAssignmentRequest>
        void GetAssignmentAsync(const GetAssignmentRequestT& request, const GetAssignmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MTurkClient::GetAssignment, request, handler, context);
        }

        /**
         * <p> The <code>GetFileUploadURL</code> operation generates and returns a
         * temporary URL. You use the temporary URL to retrieve a file uploaded by a Worker
         * as an answer to a FileUploadAnswer question for a HIT. The temporary URL is
         * generated the instant the GetFileUploadURL operation is called, and is valid for
         * 60 seconds. You can get a temporary file upload URL any time until the HIT is
         * disposed. After the HIT is disposed, any uploaded files are deleted, and cannot
         * be retrieved. Pending Deprecation on December 12, 2017. The Answer Specification
         * structure will no longer support the <code>FileUploadAnswer</code> element to be
         * used for the QuestionForm data structure. Instead, we recommend that Requesters
         * who want to create HITs asking Workers to upload files to use Amazon S3.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/GetFileUploadURL">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFileUploadURLOutcome GetFileUploadURL(const Model::GetFileUploadURLRequest& request) const;

        /**
         * A Callable wrapper for GetFileUploadURL that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetFileUploadURLRequestT = Model::GetFileUploadURLRequest>
        Model::GetFileUploadURLOutcomeCallable GetFileUploadURLCallable(const GetFileUploadURLRequestT& request) const
        {
            return SubmitCallable(&MTurkClient::GetFileUploadURL, request);
        }

        /**
         * An Async wrapper for GetFileUploadURL that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetFileUploadURLRequestT = Model::GetFileUploadURLRequest>
        void GetFileUploadURLAsync(const GetFileUploadURLRequestT& request, const GetFileUploadURLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MTurkClient::GetFileUploadURL, request, handler, context);
        }

        /**
         * <p> The <code>GetHIT</code> operation retrieves the details of the specified
         * HIT. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/GetHIT">AWS
         * API Reference</a></p>
         */
        virtual Model::GetHITOutcome GetHIT(const Model::GetHITRequest& request) const;

        /**
         * A Callable wrapper for GetHIT that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetHITRequestT = Model::GetHITRequest>
        Model::GetHITOutcomeCallable GetHITCallable(const GetHITRequestT& request) const
        {
            return SubmitCallable(&MTurkClient::GetHIT, request);
        }

        /**
         * An Async wrapper for GetHIT that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetHITRequestT = Model::GetHITRequest>
        void GetHITAsync(const GetHITRequestT& request, const GetHITResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MTurkClient::GetHIT, request, handler, context);
        }

        /**
         * <p> The <code>GetQualificationScore</code> operation returns the value of a
         * Worker's Qualification for a given Qualification type. </p> <p> To get a
         * Worker's Qualification, you must know the Worker's ID. The Worker's ID is
         * included in the assignment data returned by the
         * <code>ListAssignmentsForHIT</code> operation. </p> <p>Only the owner of a
         * Qualification type can query the value of a Worker's Qualification of that
         * type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/GetQualificationScore">AWS
         * API Reference</a></p>
         */
        virtual Model::GetQualificationScoreOutcome GetQualificationScore(const Model::GetQualificationScoreRequest& request) const;

        /**
         * A Callable wrapper for GetQualificationScore that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetQualificationScoreRequestT = Model::GetQualificationScoreRequest>
        Model::GetQualificationScoreOutcomeCallable GetQualificationScoreCallable(const GetQualificationScoreRequestT& request) const
        {
            return SubmitCallable(&MTurkClient::GetQualificationScore, request);
        }

        /**
         * An Async wrapper for GetQualificationScore that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetQualificationScoreRequestT = Model::GetQualificationScoreRequest>
        void GetQualificationScoreAsync(const GetQualificationScoreRequestT& request, const GetQualificationScoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MTurkClient::GetQualificationScore, request, handler, context);
        }

        /**
         * <p> The <code>GetQualificationType</code>operation retrieves information about a
         * Qualification type using its ID. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/GetQualificationType">AWS
         * API Reference</a></p>
         */
        virtual Model::GetQualificationTypeOutcome GetQualificationType(const Model::GetQualificationTypeRequest& request) const;

        /**
         * A Callable wrapper for GetQualificationType that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetQualificationTypeRequestT = Model::GetQualificationTypeRequest>
        Model::GetQualificationTypeOutcomeCallable GetQualificationTypeCallable(const GetQualificationTypeRequestT& request) const
        {
            return SubmitCallable(&MTurkClient::GetQualificationType, request);
        }

        /**
         * An Async wrapper for GetQualificationType that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetQualificationTypeRequestT = Model::GetQualificationTypeRequest>
        void GetQualificationTypeAsync(const GetQualificationTypeRequestT& request, const GetQualificationTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MTurkClient::GetQualificationType, request, handler, context);
        }

        /**
         * <p> The <code>ListAssignmentsForHIT</code> operation retrieves completed
         * assignments for a HIT. You can use this operation to retrieve the results for a
         * HIT. </p> <p> You can get assignments for a HIT at any time, even if the HIT is
         * not yet Reviewable. If a HIT requested multiple assignments, and has received
         * some results but has not yet become Reviewable, you can still retrieve the
         * partial results with this operation. </p> <p> Use the AssignmentStatus parameter
         * to control which set of assignments for a HIT are returned. The
         * ListAssignmentsForHIT operation can return submitted assignments awaiting
         * approval, or it can return assignments that have already been approved or
         * rejected. You can set AssignmentStatus=Approved,Rejected to get assignments that
         * have already been approved and rejected together in one result set. </p> <p>
         * Only the Requester who created the HIT can retrieve the assignments for that
         * HIT. </p> <p> Results are sorted and divided into numbered pages and the
         * operation returns a single page of results. You can use the parameters of the
         * operation to control sorting and pagination. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/ListAssignmentsForHIT">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAssignmentsForHITOutcome ListAssignmentsForHIT(const Model::ListAssignmentsForHITRequest& request) const;

        /**
         * A Callable wrapper for ListAssignmentsForHIT that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAssignmentsForHITRequestT = Model::ListAssignmentsForHITRequest>
        Model::ListAssignmentsForHITOutcomeCallable ListAssignmentsForHITCallable(const ListAssignmentsForHITRequestT& request) const
        {
            return SubmitCallable(&MTurkClient::ListAssignmentsForHIT, request);
        }

        /**
         * An Async wrapper for ListAssignmentsForHIT that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAssignmentsForHITRequestT = Model::ListAssignmentsForHITRequest>
        void ListAssignmentsForHITAsync(const ListAssignmentsForHITRequestT& request, const ListAssignmentsForHITResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MTurkClient::ListAssignmentsForHIT, request, handler, context);
        }

        /**
         * <p> The <code>ListBonusPayments</code> operation retrieves the amounts of
         * bonuses you have paid to Workers for a given HIT or assignment. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/ListBonusPayments">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBonusPaymentsOutcome ListBonusPayments(const Model::ListBonusPaymentsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListBonusPayments that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListBonusPaymentsRequestT = Model::ListBonusPaymentsRequest>
        Model::ListBonusPaymentsOutcomeCallable ListBonusPaymentsCallable(const ListBonusPaymentsRequestT& request = {}) const
        {
            return SubmitCallable(&MTurkClient::ListBonusPayments, request);
        }

        /**
         * An Async wrapper for ListBonusPayments that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListBonusPaymentsRequestT = Model::ListBonusPaymentsRequest>
        void ListBonusPaymentsAsync(const ListBonusPaymentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListBonusPaymentsRequestT& request = {}) const
        {
            return SubmitAsync(&MTurkClient::ListBonusPayments, request, handler, context);
        }

        /**
         * <p> The <code>ListHITs</code> operation returns all of a Requester's HITs. The
         * operation returns HITs of any status, except for HITs that have been deleted of
         * with the DeleteHIT operation or that have been auto-deleted. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/ListHITs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListHITsOutcome ListHITs(const Model::ListHITsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListHITs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListHITsRequestT = Model::ListHITsRequest>
        Model::ListHITsOutcomeCallable ListHITsCallable(const ListHITsRequestT& request = {}) const
        {
            return SubmitCallable(&MTurkClient::ListHITs, request);
        }

        /**
         * An Async wrapper for ListHITs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListHITsRequestT = Model::ListHITsRequest>
        void ListHITsAsync(const ListHITsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListHITsRequestT& request = {}) const
        {
            return SubmitAsync(&MTurkClient::ListHITs, request, handler, context);
        }

        /**
         * <p> The <code>ListHITsForQualificationType</code> operation returns the HITs
         * that use the given Qualification type for a Qualification requirement. The
         * operation returns HITs of any status, except for HITs that have been deleted
         * with the <code>DeleteHIT</code> operation or that have been auto-deleted.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/ListHITsForQualificationType">AWS
         * API Reference</a></p>
         */
        virtual Model::ListHITsForQualificationTypeOutcome ListHITsForQualificationType(const Model::ListHITsForQualificationTypeRequest& request) const;

        /**
         * A Callable wrapper for ListHITsForQualificationType that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListHITsForQualificationTypeRequestT = Model::ListHITsForQualificationTypeRequest>
        Model::ListHITsForQualificationTypeOutcomeCallable ListHITsForQualificationTypeCallable(const ListHITsForQualificationTypeRequestT& request) const
        {
            return SubmitCallable(&MTurkClient::ListHITsForQualificationType, request);
        }

        /**
         * An Async wrapper for ListHITsForQualificationType that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListHITsForQualificationTypeRequestT = Model::ListHITsForQualificationTypeRequest>
        void ListHITsForQualificationTypeAsync(const ListHITsForQualificationTypeRequestT& request, const ListHITsForQualificationTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MTurkClient::ListHITsForQualificationType, request, handler, context);
        }

        /**
         * <p> The <code>ListQualificationRequests</code> operation retrieves requests for
         * Qualifications of a particular Qualification type. The owner of the
         * Qualification type calls this operation to poll for pending requests, and
         * accepts them using the AcceptQualification operation. </p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/ListQualificationRequests">AWS
         * API Reference</a></p>
         */
        virtual Model::ListQualificationRequestsOutcome ListQualificationRequests(const Model::ListQualificationRequestsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListQualificationRequests that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListQualificationRequestsRequestT = Model::ListQualificationRequestsRequest>
        Model::ListQualificationRequestsOutcomeCallable ListQualificationRequestsCallable(const ListQualificationRequestsRequestT& request = {}) const
        {
            return SubmitCallable(&MTurkClient::ListQualificationRequests, request);
        }

        /**
         * An Async wrapper for ListQualificationRequests that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListQualificationRequestsRequestT = Model::ListQualificationRequestsRequest>
        void ListQualificationRequestsAsync(const ListQualificationRequestsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListQualificationRequestsRequestT& request = {}) const
        {
            return SubmitAsync(&MTurkClient::ListQualificationRequests, request, handler, context);
        }

        /**
         * <p> The <code>ListQualificationTypes</code> operation returns a list of
         * Qualification types, filtered by an optional search term. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/ListQualificationTypes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListQualificationTypesOutcome ListQualificationTypes(const Model::ListQualificationTypesRequest& request) const;

        /**
         * A Callable wrapper for ListQualificationTypes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListQualificationTypesRequestT = Model::ListQualificationTypesRequest>
        Model::ListQualificationTypesOutcomeCallable ListQualificationTypesCallable(const ListQualificationTypesRequestT& request) const
        {
            return SubmitCallable(&MTurkClient::ListQualificationTypes, request);
        }

        /**
         * An Async wrapper for ListQualificationTypes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListQualificationTypesRequestT = Model::ListQualificationTypesRequest>
        void ListQualificationTypesAsync(const ListQualificationTypesRequestT& request, const ListQualificationTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MTurkClient::ListQualificationTypes, request, handler, context);
        }

        /**
         * <p> The <code>ListReviewPolicyResultsForHIT</code> operation retrieves the
         * computed results and the actions taken in the course of executing your Review
         * Policies for a given HIT. For information about how to specify Review Policies
         * when you call CreateHIT, see Review Policies. The ListReviewPolicyResultsForHIT
         * operation can return results for both Assignment-level and HIT-level review
         * results. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/ListReviewPolicyResultsForHIT">AWS
         * API Reference</a></p>
         */
        virtual Model::ListReviewPolicyResultsForHITOutcome ListReviewPolicyResultsForHIT(const Model::ListReviewPolicyResultsForHITRequest& request) const;

        /**
         * A Callable wrapper for ListReviewPolicyResultsForHIT that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListReviewPolicyResultsForHITRequestT = Model::ListReviewPolicyResultsForHITRequest>
        Model::ListReviewPolicyResultsForHITOutcomeCallable ListReviewPolicyResultsForHITCallable(const ListReviewPolicyResultsForHITRequestT& request) const
        {
            return SubmitCallable(&MTurkClient::ListReviewPolicyResultsForHIT, request);
        }

        /**
         * An Async wrapper for ListReviewPolicyResultsForHIT that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListReviewPolicyResultsForHITRequestT = Model::ListReviewPolicyResultsForHITRequest>
        void ListReviewPolicyResultsForHITAsync(const ListReviewPolicyResultsForHITRequestT& request, const ListReviewPolicyResultsForHITResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MTurkClient::ListReviewPolicyResultsForHIT, request, handler, context);
        }

        /**
         * <p> The <code>ListReviewableHITs</code> operation retrieves the HITs with Status
         * equal to Reviewable or Status equal to Reviewing that belong to the Requester
         * calling the operation. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/ListReviewableHITs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListReviewableHITsOutcome ListReviewableHITs(const Model::ListReviewableHITsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListReviewableHITs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListReviewableHITsRequestT = Model::ListReviewableHITsRequest>
        Model::ListReviewableHITsOutcomeCallable ListReviewableHITsCallable(const ListReviewableHITsRequestT& request = {}) const
        {
            return SubmitCallable(&MTurkClient::ListReviewableHITs, request);
        }

        /**
         * An Async wrapper for ListReviewableHITs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListReviewableHITsRequestT = Model::ListReviewableHITsRequest>
        void ListReviewableHITsAsync(const ListReviewableHITsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListReviewableHITsRequestT& request = {}) const
        {
            return SubmitAsync(&MTurkClient::ListReviewableHITs, request, handler, context);
        }

        /**
         * <p>The <code>ListWorkersBlocks</code> operation retrieves a list of Workers who
         * are blocked from working on your HITs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/ListWorkerBlocks">AWS
         * API Reference</a></p>
         */
        virtual Model::ListWorkerBlocksOutcome ListWorkerBlocks(const Model::ListWorkerBlocksRequest& request = {}) const;

        /**
         * A Callable wrapper for ListWorkerBlocks that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListWorkerBlocksRequestT = Model::ListWorkerBlocksRequest>
        Model::ListWorkerBlocksOutcomeCallable ListWorkerBlocksCallable(const ListWorkerBlocksRequestT& request = {}) const
        {
            return SubmitCallable(&MTurkClient::ListWorkerBlocks, request);
        }

        /**
         * An Async wrapper for ListWorkerBlocks that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListWorkerBlocksRequestT = Model::ListWorkerBlocksRequest>
        void ListWorkerBlocksAsync(const ListWorkerBlocksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListWorkerBlocksRequestT& request = {}) const
        {
            return SubmitAsync(&MTurkClient::ListWorkerBlocks, request, handler, context);
        }

        /**
         * <p> The <code>ListWorkersWithQualificationType</code> operation returns all of
         * the Workers that have been associated with a given Qualification type.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/ListWorkersWithQualificationType">AWS
         * API Reference</a></p>
         */
        virtual Model::ListWorkersWithQualificationTypeOutcome ListWorkersWithQualificationType(const Model::ListWorkersWithQualificationTypeRequest& request) const;

        /**
         * A Callable wrapper for ListWorkersWithQualificationType that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListWorkersWithQualificationTypeRequestT = Model::ListWorkersWithQualificationTypeRequest>
        Model::ListWorkersWithQualificationTypeOutcomeCallable ListWorkersWithQualificationTypeCallable(const ListWorkersWithQualificationTypeRequestT& request) const
        {
            return SubmitCallable(&MTurkClient::ListWorkersWithQualificationType, request);
        }

        /**
         * An Async wrapper for ListWorkersWithQualificationType that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListWorkersWithQualificationTypeRequestT = Model::ListWorkersWithQualificationTypeRequest>
        void ListWorkersWithQualificationTypeAsync(const ListWorkersWithQualificationTypeRequestT& request, const ListWorkersWithQualificationTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MTurkClient::ListWorkersWithQualificationType, request, handler, context);
        }

        /**
         * <p> The <code>NotifyWorkers</code> operation sends an email to one or more
         * Workers that you specify with the Worker ID. You can specify up to 100 Worker
         * IDs to send the same message with a single call to the NotifyWorkers operation.
         * The NotifyWorkers operation will send a notification email to a Worker only if
         * you have previously approved or rejected work from the Worker. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/NotifyWorkers">AWS
         * API Reference</a></p>
         */
        virtual Model::NotifyWorkersOutcome NotifyWorkers(const Model::NotifyWorkersRequest& request) const;

        /**
         * A Callable wrapper for NotifyWorkers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename NotifyWorkersRequestT = Model::NotifyWorkersRequest>
        Model::NotifyWorkersOutcomeCallable NotifyWorkersCallable(const NotifyWorkersRequestT& request) const
        {
            return SubmitCallable(&MTurkClient::NotifyWorkers, request);
        }

        /**
         * An Async wrapper for NotifyWorkers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename NotifyWorkersRequestT = Model::NotifyWorkersRequest>
        void NotifyWorkersAsync(const NotifyWorkersRequestT& request, const NotifyWorkersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MTurkClient::NotifyWorkers, request, handler, context);
        }

        /**
         * <p> The <code>RejectAssignment</code> operation rejects the results of a
         * completed assignment. </p> <p> You can include an optional feedback message with
         * the rejection, which the Worker can see in the Status section of the web site.
         * When you include a feedback message with the rejection, it helps the Worker
         * understand why the assignment was rejected, and can improve the quality of the
         * results the Worker submits in the future. </p> <p> Only the Requester who
         * created the HIT can reject an assignment for the HIT. </p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/RejectAssignment">AWS
         * API Reference</a></p>
         */
        virtual Model::RejectAssignmentOutcome RejectAssignment(const Model::RejectAssignmentRequest& request) const;

        /**
         * A Callable wrapper for RejectAssignment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RejectAssignmentRequestT = Model::RejectAssignmentRequest>
        Model::RejectAssignmentOutcomeCallable RejectAssignmentCallable(const RejectAssignmentRequestT& request) const
        {
            return SubmitCallable(&MTurkClient::RejectAssignment, request);
        }

        /**
         * An Async wrapper for RejectAssignment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RejectAssignmentRequestT = Model::RejectAssignmentRequest>
        void RejectAssignmentAsync(const RejectAssignmentRequestT& request, const RejectAssignmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MTurkClient::RejectAssignment, request, handler, context);
        }

        /**
         * <p> The <code>RejectQualificationRequest</code> operation rejects a user's
         * request for a Qualification. </p> <p> You can provide a text message explaining
         * why the request was rejected. The Worker who made the request can see this
         * message.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/RejectQualificationRequest">AWS
         * API Reference</a></p>
         */
        virtual Model::RejectQualificationRequestOutcome RejectQualificationRequest(const Model::RejectQualificationRequestRequest& request) const;

        /**
         * A Callable wrapper for RejectQualificationRequest that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RejectQualificationRequestRequestT = Model::RejectQualificationRequestRequest>
        Model::RejectQualificationRequestOutcomeCallable RejectQualificationRequestCallable(const RejectQualificationRequestRequestT& request) const
        {
            return SubmitCallable(&MTurkClient::RejectQualificationRequest, request);
        }

        /**
         * An Async wrapper for RejectQualificationRequest that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RejectQualificationRequestRequestT = Model::RejectQualificationRequestRequest>
        void RejectQualificationRequestAsync(const RejectQualificationRequestRequestT& request, const RejectQualificationRequestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MTurkClient::RejectQualificationRequest, request, handler, context);
        }

        /**
         * <p> The <code>SendBonus</code> operation issues a payment of money from your
         * account to a Worker. This payment happens separately from the reward you pay to
         * the Worker when you approve the Worker's assignment. The SendBonus operation
         * requires the Worker's ID and the assignment ID as parameters to initiate payment
         * of the bonus. You must include a message that explains the reason for the bonus
         * payment, as the Worker may not be expecting the payment. Amazon Mechanical Turk
         * collects a fee for bonus payments, similar to the HIT listing fee. This
         * operation fails if your account does not have enough funds to pay for both the
         * bonus and the fees. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/SendBonus">AWS
         * API Reference</a></p>
         */
        virtual Model::SendBonusOutcome SendBonus(const Model::SendBonusRequest& request) const;

        /**
         * A Callable wrapper for SendBonus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SendBonusRequestT = Model::SendBonusRequest>
        Model::SendBonusOutcomeCallable SendBonusCallable(const SendBonusRequestT& request) const
        {
            return SubmitCallable(&MTurkClient::SendBonus, request);
        }

        /**
         * An Async wrapper for SendBonus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SendBonusRequestT = Model::SendBonusRequest>
        void SendBonusAsync(const SendBonusRequestT& request, const SendBonusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MTurkClient::SendBonus, request, handler, context);
        }

        /**
         * <p> The <code>SendTestEventNotification</code> operation causes Amazon
         * Mechanical Turk to send a notification message as if a HIT event occurred,
         * according to the provided notification specification. This allows you to test
         * notifications without setting up notifications for a real HIT type and trying to
         * trigger them using the website. When you call this operation, the service
         * attempts to send the test notification immediately. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/SendTestEventNotification">AWS
         * API Reference</a></p>
         */
        virtual Model::SendTestEventNotificationOutcome SendTestEventNotification(const Model::SendTestEventNotificationRequest& request) const;

        /**
         * A Callable wrapper for SendTestEventNotification that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SendTestEventNotificationRequestT = Model::SendTestEventNotificationRequest>
        Model::SendTestEventNotificationOutcomeCallable SendTestEventNotificationCallable(const SendTestEventNotificationRequestT& request) const
        {
            return SubmitCallable(&MTurkClient::SendTestEventNotification, request);
        }

        /**
         * An Async wrapper for SendTestEventNotification that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SendTestEventNotificationRequestT = Model::SendTestEventNotificationRequest>
        void SendTestEventNotificationAsync(const SendTestEventNotificationRequestT& request, const SendTestEventNotificationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MTurkClient::SendTestEventNotification, request, handler, context);
        }

        /**
         * <p> The <code>UpdateExpirationForHIT</code> operation allows you update the
         * expiration time of a HIT. If you update it to a time in the past, the HIT will
         * be immediately expired. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/UpdateExpirationForHIT">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateExpirationForHITOutcome UpdateExpirationForHIT(const Model::UpdateExpirationForHITRequest& request) const;

        /**
         * A Callable wrapper for UpdateExpirationForHIT that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateExpirationForHITRequestT = Model::UpdateExpirationForHITRequest>
        Model::UpdateExpirationForHITOutcomeCallable UpdateExpirationForHITCallable(const UpdateExpirationForHITRequestT& request) const
        {
            return SubmitCallable(&MTurkClient::UpdateExpirationForHIT, request);
        }

        /**
         * An Async wrapper for UpdateExpirationForHIT that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateExpirationForHITRequestT = Model::UpdateExpirationForHITRequest>
        void UpdateExpirationForHITAsync(const UpdateExpirationForHITRequestT& request, const UpdateExpirationForHITResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MTurkClient::UpdateExpirationForHIT, request, handler, context);
        }

        /**
         * <p> The <code>UpdateHITReviewStatus</code> operation updates the status of a
         * HIT. If the status is Reviewable, this operation can update the status to
         * Reviewing, or it can revert a Reviewing HIT back to the Reviewable status.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/UpdateHITReviewStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateHITReviewStatusOutcome UpdateHITReviewStatus(const Model::UpdateHITReviewStatusRequest& request) const;

        /**
         * A Callable wrapper for UpdateHITReviewStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateHITReviewStatusRequestT = Model::UpdateHITReviewStatusRequest>
        Model::UpdateHITReviewStatusOutcomeCallable UpdateHITReviewStatusCallable(const UpdateHITReviewStatusRequestT& request) const
        {
            return SubmitCallable(&MTurkClient::UpdateHITReviewStatus, request);
        }

        /**
         * An Async wrapper for UpdateHITReviewStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateHITReviewStatusRequestT = Model::UpdateHITReviewStatusRequest>
        void UpdateHITReviewStatusAsync(const UpdateHITReviewStatusRequestT& request, const UpdateHITReviewStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MTurkClient::UpdateHITReviewStatus, request, handler, context);
        }

        /**
         * <p> The <code>UpdateHITTypeOfHIT</code> operation allows you to change the
         * HITType properties of a HIT. This operation disassociates the HIT from its old
         * HITType properties and associates it with the new HITType properties. The HIT
         * takes on the properties of the new HITType in place of the old ones.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/UpdateHITTypeOfHIT">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateHITTypeOfHITOutcome UpdateHITTypeOfHIT(const Model::UpdateHITTypeOfHITRequest& request) const;

        /**
         * A Callable wrapper for UpdateHITTypeOfHIT that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateHITTypeOfHITRequestT = Model::UpdateHITTypeOfHITRequest>
        Model::UpdateHITTypeOfHITOutcomeCallable UpdateHITTypeOfHITCallable(const UpdateHITTypeOfHITRequestT& request) const
        {
            return SubmitCallable(&MTurkClient::UpdateHITTypeOfHIT, request);
        }

        /**
         * An Async wrapper for UpdateHITTypeOfHIT that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateHITTypeOfHITRequestT = Model::UpdateHITTypeOfHITRequest>
        void UpdateHITTypeOfHITAsync(const UpdateHITTypeOfHITRequestT& request, const UpdateHITTypeOfHITResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MTurkClient::UpdateHITTypeOfHIT, request, handler, context);
        }

        /**
         * <p> The <code>UpdateNotificationSettings</code> operation creates, updates,
         * disables or re-enables notifications for a HIT type. If you call the
         * UpdateNotificationSettings operation for a HIT type that already has a
         * notification specification, the operation replaces the old specification with a
         * new one. You can call the UpdateNotificationSettings operation to enable or
         * disable notifications for the HIT type, without having to modify the
         * notification specification itself by providing updates to the Active status
         * without specifying a new notification specification. To change the Active status
         * of a HIT type's notifications, the HIT type must already have a notification
         * specification, or one must be provided in the same call to
         * <code>UpdateNotificationSettings</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/UpdateNotificationSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateNotificationSettingsOutcome UpdateNotificationSettings(const Model::UpdateNotificationSettingsRequest& request) const;

        /**
         * A Callable wrapper for UpdateNotificationSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateNotificationSettingsRequestT = Model::UpdateNotificationSettingsRequest>
        Model::UpdateNotificationSettingsOutcomeCallable UpdateNotificationSettingsCallable(const UpdateNotificationSettingsRequestT& request) const
        {
            return SubmitCallable(&MTurkClient::UpdateNotificationSettings, request);
        }

        /**
         * An Async wrapper for UpdateNotificationSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateNotificationSettingsRequestT = Model::UpdateNotificationSettingsRequest>
        void UpdateNotificationSettingsAsync(const UpdateNotificationSettingsRequestT& request, const UpdateNotificationSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MTurkClient::UpdateNotificationSettings, request, handler, context);
        }

        /**
         * <p> The <code>UpdateQualificationType</code> operation modifies the attributes
         * of an existing Qualification type, which is represented by a QualificationType
         * data structure. Only the owner of a Qualification type can modify its
         * attributes. </p> <p> Most attributes of a Qualification type can be changed
         * after the type has been created. However, the Name and Keywords fields cannot be
         * modified. The RetryDelayInSeconds parameter can be modified or added to change
         * the delay or to enable retries, but RetryDelayInSeconds cannot be used to
         * disable retries. </p> <p> You can use this operation to update the test for a
         * Qualification type. The test is updated based on the values specified for the
         * Test, TestDurationInSeconds and AnswerKey parameters. All three parameters
         * specify the updated test. If you are updating the test for a type, you must
         * specify the Test and TestDurationInSeconds parameters. The AnswerKey parameter
         * is optional; omitting it specifies that the updated test does not have an answer
         * key. </p> <p> If you omit the Test parameter, the test for the Qualification
         * type is unchanged. There is no way to remove a test from a Qualification type
         * that has one. If the type already has a test, you cannot update it to be
         * AutoGranted. If the Qualification type does not have a test and one is provided
         * by an update, the type will henceforth have a test. </p> <p> If you want to
         * update the test duration or answer key for an existing test without changing the
         * questions, you must specify a Test parameter with the original questions, along
         * with the updated values. </p> <p> If you provide an updated Test but no
         * AnswerKey, the new test will not have an answer key. Requests for such
         * Qualifications must be granted manually. </p> <p> You can also update the
         * AutoGranted and AutoGrantedValue attributes of the Qualification
         * type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/UpdateQualificationType">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateQualificationTypeOutcome UpdateQualificationType(const Model::UpdateQualificationTypeRequest& request) const;

        /**
         * A Callable wrapper for UpdateQualificationType that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateQualificationTypeRequestT = Model::UpdateQualificationTypeRequest>
        Model::UpdateQualificationTypeOutcomeCallable UpdateQualificationTypeCallable(const UpdateQualificationTypeRequestT& request) const
        {
            return SubmitCallable(&MTurkClient::UpdateQualificationType, request);
        }

        /**
         * An Async wrapper for UpdateQualificationType that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateQualificationTypeRequestT = Model::UpdateQualificationTypeRequest>
        void UpdateQualificationTypeAsync(const UpdateQualificationTypeRequestT& request, const UpdateQualificationTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MTurkClient::UpdateQualificationType, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<MTurkEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<MTurkClient>;

  };

} // namespace MTurk
} // namespace Aws
