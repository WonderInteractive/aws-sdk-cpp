﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/savingsplans/SavingsPlans_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/savingsplans/SavingsPlansServiceClientModel.h>
#include <smithy/client/AwsSmithyClient.h>
#include <smithy/identity/auth/built-in/SigV4AuthSchemeResolver.h>
#include <smithy/identity/auth/built-in/SigV4AuthScheme.h>
#include <smithy/client/serializer/JsonOutcomeSerializer.h>
#include <aws/savingsplans/SavingsPlansErrorMarshaller.h>

namespace Aws
{
namespace SavingsPlans
{
  AWS_SAVINGSPLANS_API extern const char SERVICE_NAME[];
  /**
   * <p>Savings Plans are a pricing model that offer significant savings on Amazon
   * Web Services usage (for example, on Amazon EC2 instances). You commit to a
   * consistent amount of usage per hour, in the specified currency, for a term of
   * one or three years, and receive a lower price for that usage. For more
   * information, see the <a
   * href="https://docs.aws.amazon.com/savingsplans/latest/userguide/">Amazon Web
   * Services Savings Plans User Guide</a>.</p>
   */
  class AWS_SAVINGSPLANS_API SavingsPlansClient : smithy::client::AwsSmithyClientT<Aws::SavingsPlans::SERVICE_NAME,
      Aws::SavingsPlans::SavingsPlansClientConfiguration,
      smithy::SigV4AuthSchemeResolver<>,
      Aws::Crt::Variant<smithy::SigV4AuthScheme>,
      SavingsPlansEndpointProviderBase,
      smithy::client::JsonOutcomeSerializer,
      smithy::client::JsonOutcome,
      Aws::Client::SavingsPlansErrorMarshaller>,
    Aws::Client::ClientWithAsyncTemplateMethods<SavingsPlansClient>
  {
    public:
      static const char* GetServiceName();
      static const char* GetAllocationTag();
      inline const char* GetServiceClientName() const override { return "savingsplans"; }

      typedef SavingsPlansClientConfiguration ClientConfigurationType;
      typedef SavingsPlansEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SavingsPlansClient(const Aws::SavingsPlans::SavingsPlansClientConfiguration& clientConfiguration = Aws::SavingsPlans::SavingsPlansClientConfiguration(),
                           std::shared_ptr<SavingsPlansEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SavingsPlansClient(const Aws::Auth::AWSCredentials& credentials,
                           std::shared_ptr<SavingsPlansEndpointProviderBase> endpointProvider = nullptr,
                           const Aws::SavingsPlans::SavingsPlansClientConfiguration& clientConfiguration = Aws::SavingsPlans::SavingsPlansClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SavingsPlansClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<SavingsPlansEndpointProviderBase> endpointProvider = nullptr,
                           const Aws::SavingsPlans::SavingsPlansClientConfiguration& clientConfiguration = Aws::SavingsPlans::SavingsPlansClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SavingsPlansClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SavingsPlansClient(const Aws::Auth::AWSCredentials& credentials,
                           const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SavingsPlansClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                           const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~SavingsPlansClient();

        /**
         * <p>Creates a Savings Plan.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/savingsplans-2019-06-28/CreateSavingsPlan">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSavingsPlanOutcome CreateSavingsPlan(const Model::CreateSavingsPlanRequest& request) const;

        /**
         * A Callable wrapper for CreateSavingsPlan that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateSavingsPlanRequestT = Model::CreateSavingsPlanRequest>
        Model::CreateSavingsPlanOutcomeCallable CreateSavingsPlanCallable(const CreateSavingsPlanRequestT& request) const
        {
            return SubmitCallable(&SavingsPlansClient::CreateSavingsPlan, request);
        }

        /**
         * An Async wrapper for CreateSavingsPlan that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateSavingsPlanRequestT = Model::CreateSavingsPlanRequest>
        void CreateSavingsPlanAsync(const CreateSavingsPlanRequestT& request, const CreateSavingsPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SavingsPlansClient::CreateSavingsPlan, request, handler, context);
        }

        /**
         * <p>Deletes the queued purchase for the specified Savings Plan.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/savingsplans-2019-06-28/DeleteQueuedSavingsPlan">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteQueuedSavingsPlanOutcome DeleteQueuedSavingsPlan(const Model::DeleteQueuedSavingsPlanRequest& request) const;

        /**
         * A Callable wrapper for DeleteQueuedSavingsPlan that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteQueuedSavingsPlanRequestT = Model::DeleteQueuedSavingsPlanRequest>
        Model::DeleteQueuedSavingsPlanOutcomeCallable DeleteQueuedSavingsPlanCallable(const DeleteQueuedSavingsPlanRequestT& request) const
        {
            return SubmitCallable(&SavingsPlansClient::DeleteQueuedSavingsPlan, request);
        }

        /**
         * An Async wrapper for DeleteQueuedSavingsPlan that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteQueuedSavingsPlanRequestT = Model::DeleteQueuedSavingsPlanRequest>
        void DeleteQueuedSavingsPlanAsync(const DeleteQueuedSavingsPlanRequestT& request, const DeleteQueuedSavingsPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SavingsPlansClient::DeleteQueuedSavingsPlan, request, handler, context);
        }

        /**
         * <p>Describes the rates for the specified Savings Plan.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/savingsplans-2019-06-28/DescribeSavingsPlanRates">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSavingsPlanRatesOutcome DescribeSavingsPlanRates(const Model::DescribeSavingsPlanRatesRequest& request) const;

        /**
         * A Callable wrapper for DescribeSavingsPlanRates that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeSavingsPlanRatesRequestT = Model::DescribeSavingsPlanRatesRequest>
        Model::DescribeSavingsPlanRatesOutcomeCallable DescribeSavingsPlanRatesCallable(const DescribeSavingsPlanRatesRequestT& request) const
        {
            return SubmitCallable(&SavingsPlansClient::DescribeSavingsPlanRates, request);
        }

        /**
         * An Async wrapper for DescribeSavingsPlanRates that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeSavingsPlanRatesRequestT = Model::DescribeSavingsPlanRatesRequest>
        void DescribeSavingsPlanRatesAsync(const DescribeSavingsPlanRatesRequestT& request, const DescribeSavingsPlanRatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SavingsPlansClient::DescribeSavingsPlanRates, request, handler, context);
        }

        /**
         * <p>Describes the specified Savings Plans.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/savingsplans-2019-06-28/DescribeSavingsPlans">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSavingsPlansOutcome DescribeSavingsPlans(const Model::DescribeSavingsPlansRequest& request = {}) const;

        /**
         * A Callable wrapper for DescribeSavingsPlans that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeSavingsPlansRequestT = Model::DescribeSavingsPlansRequest>
        Model::DescribeSavingsPlansOutcomeCallable DescribeSavingsPlansCallable(const DescribeSavingsPlansRequestT& request = {}) const
        {
            return SubmitCallable(&SavingsPlansClient::DescribeSavingsPlans, request);
        }

        /**
         * An Async wrapper for DescribeSavingsPlans that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeSavingsPlansRequestT = Model::DescribeSavingsPlansRequest>
        void DescribeSavingsPlansAsync(const DescribeSavingsPlansResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const DescribeSavingsPlansRequestT& request = {}) const
        {
            return SubmitAsync(&SavingsPlansClient::DescribeSavingsPlans, request, handler, context);
        }

        /**
         * <p>Describes the offering rates for the specified Savings Plans.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/savingsplans-2019-06-28/DescribeSavingsPlansOfferingRates">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSavingsPlansOfferingRatesOutcome DescribeSavingsPlansOfferingRates(const Model::DescribeSavingsPlansOfferingRatesRequest& request = {}) const;

        /**
         * A Callable wrapper for DescribeSavingsPlansOfferingRates that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeSavingsPlansOfferingRatesRequestT = Model::DescribeSavingsPlansOfferingRatesRequest>
        Model::DescribeSavingsPlansOfferingRatesOutcomeCallable DescribeSavingsPlansOfferingRatesCallable(const DescribeSavingsPlansOfferingRatesRequestT& request = {}) const
        {
            return SubmitCallable(&SavingsPlansClient::DescribeSavingsPlansOfferingRates, request);
        }

        /**
         * An Async wrapper for DescribeSavingsPlansOfferingRates that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeSavingsPlansOfferingRatesRequestT = Model::DescribeSavingsPlansOfferingRatesRequest>
        void DescribeSavingsPlansOfferingRatesAsync(const DescribeSavingsPlansOfferingRatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const DescribeSavingsPlansOfferingRatesRequestT& request = {}) const
        {
            return SubmitAsync(&SavingsPlansClient::DescribeSavingsPlansOfferingRates, request, handler, context);
        }

        /**
         * <p>Describes the offerings for the specified Savings Plans.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/savingsplans-2019-06-28/DescribeSavingsPlansOfferings">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSavingsPlansOfferingsOutcome DescribeSavingsPlansOfferings(const Model::DescribeSavingsPlansOfferingsRequest& request = {}) const;

        /**
         * A Callable wrapper for DescribeSavingsPlansOfferings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeSavingsPlansOfferingsRequestT = Model::DescribeSavingsPlansOfferingsRequest>
        Model::DescribeSavingsPlansOfferingsOutcomeCallable DescribeSavingsPlansOfferingsCallable(const DescribeSavingsPlansOfferingsRequestT& request = {}) const
        {
            return SubmitCallable(&SavingsPlansClient::DescribeSavingsPlansOfferings, request);
        }

        /**
         * An Async wrapper for DescribeSavingsPlansOfferings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeSavingsPlansOfferingsRequestT = Model::DescribeSavingsPlansOfferingsRequest>
        void DescribeSavingsPlansOfferingsAsync(const DescribeSavingsPlansOfferingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const DescribeSavingsPlansOfferingsRequestT& request = {}) const
        {
            return SubmitAsync(&SavingsPlansClient::DescribeSavingsPlansOfferings, request, handler, context);
        }

        /**
         * <p>Lists the tags for the specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/savingsplans-2019-06-28/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&SavingsPlansClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SavingsPlansClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Returns the specified Savings Plan.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/savingsplans-2019-06-28/ReturnSavingsPlan">AWS
         * API Reference</a></p>
         */
        virtual Model::ReturnSavingsPlanOutcome ReturnSavingsPlan(const Model::ReturnSavingsPlanRequest& request) const;

        /**
         * A Callable wrapper for ReturnSavingsPlan that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ReturnSavingsPlanRequestT = Model::ReturnSavingsPlanRequest>
        Model::ReturnSavingsPlanOutcomeCallable ReturnSavingsPlanCallable(const ReturnSavingsPlanRequestT& request) const
        {
            return SubmitCallable(&SavingsPlansClient::ReturnSavingsPlan, request);
        }

        /**
         * An Async wrapper for ReturnSavingsPlan that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ReturnSavingsPlanRequestT = Model::ReturnSavingsPlanRequest>
        void ReturnSavingsPlanAsync(const ReturnSavingsPlanRequestT& request, const ReturnSavingsPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SavingsPlansClient::ReturnSavingsPlan, request, handler, context);
        }

        /**
         * <p>Adds the specified tags to the specified resource.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/savingsplans-2019-06-28/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&SavingsPlansClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SavingsPlansClient::TagResource, request, handler, context);
        }

        /**
         * <p>Removes the specified tags from the specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/savingsplans-2019-06-28/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&SavingsPlansClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SavingsPlansClient::UntagResource, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<SavingsPlansEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<SavingsPlansClient>;

  };

} // namespace SavingsPlans
} // namespace Aws
