﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/keyspaces/Keyspaces_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/keyspaces/KeyspacesServiceClientModel.h>
#include <smithy/client/AwsSmithyClient.h>
#include <smithy/identity/auth/built-in/SigV4AuthSchemeResolver.h>
#include <smithy/identity/auth/built-in/SigV4AuthScheme.h>
#include <smithy/client/serializer/JsonOutcomeSerializer.h>
#include <aws/keyspaces/KeyspacesErrorMarshaller.h>

namespace Aws
{
namespace Keyspaces
{
  AWS_KEYSPACES_API extern const char SERVICE_NAME[];
  /**
   * <p>Amazon Keyspaces (for Apache Cassandra) is a scalable, highly available, and
   * managed Apache Cassandra-compatible database service. Amazon Keyspaces makes it
   * easy to migrate, run, and scale Cassandra workloads in the Amazon Web Services
   * Cloud. With just a few clicks on the Amazon Web Services Management Console or a
   * few lines of code, you can create keyspaces and tables in Amazon Keyspaces,
   * without deploying any infrastructure or installing software. </p> <p>In addition
   * to supporting Cassandra Query Language (CQL) requests via open-source Cassandra
   * drivers, Amazon Keyspaces supports data definition language (DDL) operations to
   * manage keyspaces and tables using the Amazon Web Services SDK and CLI, as well
   * as infrastructure as code (IaC) services and tools such as CloudFormation and
   * Terraform. This API reference describes the supported DDL operations in
   * detail.</p> <p>For the list of all supported CQL APIs, see <a
   * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/cassandra-apis.html">Supported
   * Cassandra APIs, operations, and data types in Amazon Keyspaces</a> in the
   * <i>Amazon Keyspaces Developer Guide</i>.</p> <p>To learn how Amazon Keyspaces
   * API actions are recorded with CloudTrail, see <a
   * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/logging-using-cloudtrail.html#service-name-info-in-cloudtrail">Amazon
   * Keyspaces information in CloudTrail</a> in the <i>Amazon Keyspaces Developer
   * Guide</i>.</p> <p>For more information about Amazon Web Services APIs, for
   * example how to implement retry logic or how to sign Amazon Web Services API
   * requests, see <a
   * href="https://docs.aws.amazon.com/general/latest/gr/aws-apis.html">Amazon Web
   * Services APIs</a> in the <i>General Reference</i>.</p>
   */
  class AWS_KEYSPACES_API KeyspacesClient : smithy::client::AwsSmithyClientT<Aws::Keyspaces::SERVICE_NAME,
      Aws::Keyspaces::KeyspacesClientConfiguration,
      smithy::SigV4AuthSchemeResolver<>,
      Aws::Crt::Variant<smithy::SigV4AuthScheme>,
      KeyspacesEndpointProviderBase,
      smithy::client::JsonOutcomeSerializer,
      smithy::client::JsonOutcome,
      Aws::Client::KeyspacesErrorMarshaller>,
    Aws::Client::ClientWithAsyncTemplateMethods<KeyspacesClient>
  {
    public:
      static const char* GetServiceName();
      static const char* GetAllocationTag();
      inline const char* GetServiceClientName() const override { return "Keyspaces"; }

      typedef KeyspacesClientConfiguration ClientConfigurationType;
      typedef KeyspacesEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        KeyspacesClient(const Aws::Keyspaces::KeyspacesClientConfiguration& clientConfiguration = Aws::Keyspaces::KeyspacesClientConfiguration(),
                        std::shared_ptr<KeyspacesEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        KeyspacesClient(const Aws::Auth::AWSCredentials& credentials,
                        std::shared_ptr<KeyspacesEndpointProviderBase> endpointProvider = nullptr,
                        const Aws::Keyspaces::KeyspacesClientConfiguration& clientConfiguration = Aws::Keyspaces::KeyspacesClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        KeyspacesClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                        std::shared_ptr<KeyspacesEndpointProviderBase> endpointProvider = nullptr,
                        const Aws::Keyspaces::KeyspacesClientConfiguration& clientConfiguration = Aws::Keyspaces::KeyspacesClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        KeyspacesClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        KeyspacesClient(const Aws::Auth::AWSCredentials& credentials,
                        const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        KeyspacesClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                        const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~KeyspacesClient();

        /**
         * <p>The <code>CreateKeyspace</code> operation adds a new keyspace to your
         * account. In an Amazon Web Services account, keyspace names must be unique within
         * each Region.</p> <p> <code>CreateKeyspace</code> is an asynchronous operation.
         * You can monitor the creation status of the new keyspace by using the
         * <code>GetKeyspace</code> operation.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/getting-started.keyspaces.html">Create
         * a keyspace</a> in the <i>Amazon Keyspaces Developer Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/keyspaces-2022-02-10/CreateKeyspace">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateKeyspaceOutcome CreateKeyspace(const Model::CreateKeyspaceRequest& request) const;

        /**
         * A Callable wrapper for CreateKeyspace that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateKeyspaceRequestT = Model::CreateKeyspaceRequest>
        Model::CreateKeyspaceOutcomeCallable CreateKeyspaceCallable(const CreateKeyspaceRequestT& request) const
        {
            return SubmitCallable(&KeyspacesClient::CreateKeyspace, request);
        }

        /**
         * An Async wrapper for CreateKeyspace that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateKeyspaceRequestT = Model::CreateKeyspaceRequest>
        void CreateKeyspaceAsync(const CreateKeyspaceRequestT& request, const CreateKeyspaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KeyspacesClient::CreateKeyspace, request, handler, context);
        }

        /**
         * <p>The <code>CreateTable</code> operation adds a new table to the specified
         * keyspace. Within a keyspace, table names must be unique.</p> <p>
         * <code>CreateTable</code> is an asynchronous operation. When the request is
         * received, the status of the table is set to <code>CREATING</code>. You can
         * monitor the creation status of the new table by using the <code>GetTable</code>
         * operation, which returns the current <code>status</code> of the table. You can
         * start using a table when the status is <code>ACTIVE</code>.</p> <p>For more
         * information, see <a
         * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/getting-started.tables.html">Create
         * a table</a> in the <i>Amazon Keyspaces Developer Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/keyspaces-2022-02-10/CreateTable">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTableOutcome CreateTable(const Model::CreateTableRequest& request) const;

        /**
         * A Callable wrapper for CreateTable that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateTableRequestT = Model::CreateTableRequest>
        Model::CreateTableOutcomeCallable CreateTableCallable(const CreateTableRequestT& request) const
        {
            return SubmitCallable(&KeyspacesClient::CreateTable, request);
        }

        /**
         * An Async wrapper for CreateTable that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateTableRequestT = Model::CreateTableRequest>
        void CreateTableAsync(const CreateTableRequestT& request, const CreateTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KeyspacesClient::CreateTable, request, handler, context);
        }

        /**
         * <p> The <code>CreateType</code> operation creates a new user-defined type in the
         * specified keyspace. </p> <p>To configure the required permissions, see <a
         * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/configure-udt-permissions.html#udt-permissions-create">Permissions
         * to create a UDT</a> in the <i>Amazon Keyspaces Developer Guide</i>.</p> <p>For
         * more information, see <a
         * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/udts.html">User-defined
         * types (UDTs)</a> in the <i>Amazon Keyspaces Developer Guide</i>. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/keyspaces-2022-02-10/CreateType">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTypeOutcome CreateType(const Model::CreateTypeRequest& request) const;

        /**
         * A Callable wrapper for CreateType that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateTypeRequestT = Model::CreateTypeRequest>
        Model::CreateTypeOutcomeCallable CreateTypeCallable(const CreateTypeRequestT& request) const
        {
            return SubmitCallable(&KeyspacesClient::CreateType, request);
        }

        /**
         * An Async wrapper for CreateType that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateTypeRequestT = Model::CreateTypeRequest>
        void CreateTypeAsync(const CreateTypeRequestT& request, const CreateTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KeyspacesClient::CreateType, request, handler, context);
        }

        /**
         * <p>The <code>DeleteKeyspace</code> operation deletes a keyspace and all of its
         * tables. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/keyspaces-2022-02-10/DeleteKeyspace">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteKeyspaceOutcome DeleteKeyspace(const Model::DeleteKeyspaceRequest& request) const;

        /**
         * A Callable wrapper for DeleteKeyspace that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteKeyspaceRequestT = Model::DeleteKeyspaceRequest>
        Model::DeleteKeyspaceOutcomeCallable DeleteKeyspaceCallable(const DeleteKeyspaceRequestT& request) const
        {
            return SubmitCallable(&KeyspacesClient::DeleteKeyspace, request);
        }

        /**
         * An Async wrapper for DeleteKeyspace that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteKeyspaceRequestT = Model::DeleteKeyspaceRequest>
        void DeleteKeyspaceAsync(const DeleteKeyspaceRequestT& request, const DeleteKeyspaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KeyspacesClient::DeleteKeyspace, request, handler, context);
        }

        /**
         * <p>The <code>DeleteTable</code> operation deletes a table and all of its data.
         * After a <code>DeleteTable</code> request is received, the specified table is in
         * the <code>DELETING</code> state until Amazon Keyspaces completes the deletion.
         * If the table is in the <code>ACTIVE</code> state, you can delete it. If a table
         * is either in the <code>CREATING</code> or <code>UPDATING</code> states, then
         * Amazon Keyspaces returns a <code>ResourceInUseException</code>. If the specified
         * table does not exist, Amazon Keyspaces returns a
         * <code>ResourceNotFoundException</code>. If the table is already in the
         * <code>DELETING</code> state, no error is returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/keyspaces-2022-02-10/DeleteTable">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTableOutcome DeleteTable(const Model::DeleteTableRequest& request) const;

        /**
         * A Callable wrapper for DeleteTable that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteTableRequestT = Model::DeleteTableRequest>
        Model::DeleteTableOutcomeCallable DeleteTableCallable(const DeleteTableRequestT& request) const
        {
            return SubmitCallable(&KeyspacesClient::DeleteTable, request);
        }

        /**
         * An Async wrapper for DeleteTable that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteTableRequestT = Model::DeleteTableRequest>
        void DeleteTableAsync(const DeleteTableRequestT& request, const DeleteTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KeyspacesClient::DeleteTable, request, handler, context);
        }

        /**
         * <p> The <code>DeleteType</code> operation deletes a user-defined type (UDT). You
         * can only delete a type that is not used in a table or another UDT. </p> <p>To
         * configure the required permissions, see <a
         * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/configure-udt-permissions.html#udt-permissions-drop">Permissions
         * to delete a UDT</a> in the <i>Amazon Keyspaces Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/keyspaces-2022-02-10/DeleteType">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTypeOutcome DeleteType(const Model::DeleteTypeRequest& request) const;

        /**
         * A Callable wrapper for DeleteType that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteTypeRequestT = Model::DeleteTypeRequest>
        Model::DeleteTypeOutcomeCallable DeleteTypeCallable(const DeleteTypeRequestT& request) const
        {
            return SubmitCallable(&KeyspacesClient::DeleteType, request);
        }

        /**
         * An Async wrapper for DeleteType that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteTypeRequestT = Model::DeleteTypeRequest>
        void DeleteTypeAsync(const DeleteTypeRequestT& request, const DeleteTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KeyspacesClient::DeleteType, request, handler, context);
        }

        /**
         * <p>Returns the name of the specified keyspace, the Amazon Resource Name (ARN),
         * the replication strategy, the Amazon Web Services Regions of a multi-Region
         * keyspace, and the status of newly added Regions after an
         * <code>UpdateKeyspace</code> operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/keyspaces-2022-02-10/GetKeyspace">AWS
         * API Reference</a></p>
         */
        virtual Model::GetKeyspaceOutcome GetKeyspace(const Model::GetKeyspaceRequest& request) const;

        /**
         * A Callable wrapper for GetKeyspace that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetKeyspaceRequestT = Model::GetKeyspaceRequest>
        Model::GetKeyspaceOutcomeCallable GetKeyspaceCallable(const GetKeyspaceRequestT& request) const
        {
            return SubmitCallable(&KeyspacesClient::GetKeyspace, request);
        }

        /**
         * An Async wrapper for GetKeyspace that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetKeyspaceRequestT = Model::GetKeyspaceRequest>
        void GetKeyspaceAsync(const GetKeyspaceRequestT& request, const GetKeyspaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KeyspacesClient::GetKeyspace, request, handler, context);
        }

        /**
         * <p>Returns information about the table, including the table's name and current
         * status, the keyspace name, configuration settings, and metadata.</p> <p>To read
         * table metadata using <code>GetTable</code>, the IAM principal needs
         * <code>Select</code> action permissions for the table and the system
         * keyspace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/keyspaces-2022-02-10/GetTable">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTableOutcome GetTable(const Model::GetTableRequest& request) const;

        /**
         * A Callable wrapper for GetTable that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetTableRequestT = Model::GetTableRequest>
        Model::GetTableOutcomeCallable GetTableCallable(const GetTableRequestT& request) const
        {
            return SubmitCallable(&KeyspacesClient::GetTable, request);
        }

        /**
         * An Async wrapper for GetTable that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetTableRequestT = Model::GetTableRequest>
        void GetTableAsync(const GetTableRequestT& request, const GetTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KeyspacesClient::GetTable, request, handler, context);
        }

        /**
         * <p>Returns auto scaling related settings of the specified table in JSON format.
         * If the table is a multi-Region table, the Amazon Web Services Region specific
         * auto scaling settings of the table are included.</p> <p>Amazon Keyspaces auto
         * scaling helps you provision throughput capacity for variable workloads
         * efficiently by increasing and decreasing your table's read and write capacity
         * automatically in response to application traffic. For more information, see <a
         * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/autoscaling.html">Managing
         * throughput capacity automatically with Amazon Keyspaces auto scaling</a> in the
         * <i>Amazon Keyspaces Developer Guide</i>.</p>  <p>
         * <code>GetTableAutoScalingSettings</code> can't be used as an action in an IAM
         * policy.</p>  <p>To define permissions for
         * <code>GetTableAutoScalingSettings</code>, you must allow the following two
         * actions in the IAM policy statement's <code>Action</code> element:</p> <ul> <li>
         * <p> <code>application-autoscaling:DescribeScalableTargets</code> </p> </li> <li>
         * <p> <code>application-autoscaling:DescribeScalingPolicies</code> </p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/keyspaces-2022-02-10/GetTableAutoScalingSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTableAutoScalingSettingsOutcome GetTableAutoScalingSettings(const Model::GetTableAutoScalingSettingsRequest& request) const;

        /**
         * A Callable wrapper for GetTableAutoScalingSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetTableAutoScalingSettingsRequestT = Model::GetTableAutoScalingSettingsRequest>
        Model::GetTableAutoScalingSettingsOutcomeCallable GetTableAutoScalingSettingsCallable(const GetTableAutoScalingSettingsRequestT& request) const
        {
            return SubmitCallable(&KeyspacesClient::GetTableAutoScalingSettings, request);
        }

        /**
         * An Async wrapper for GetTableAutoScalingSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetTableAutoScalingSettingsRequestT = Model::GetTableAutoScalingSettingsRequest>
        void GetTableAutoScalingSettingsAsync(const GetTableAutoScalingSettingsRequestT& request, const GetTableAutoScalingSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KeyspacesClient::GetTableAutoScalingSettings, request, handler, context);
        }

        /**
         * <p> The <code>GetType</code> operation returns information about the type, for
         * example the field definitions, the timestamp when the type was last modified,
         * the level of nesting, the status, and details about if the type is used in other
         * types and tables. </p> <p>To read keyspace metadata using <code>GetType</code>,
         * the IAM principal needs <code>Select</code> action permissions for the system
         * keyspace. To configure the required permissions, see <a
         * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/configure-udt-permissions.html#udt-permissions-view">Permissions
         * to view a UDT</a> in the <i>Amazon Keyspaces Developer Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/keyspaces-2022-02-10/GetType">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTypeOutcome GetType(const Model::GetTypeRequest& request) const;

        /**
         * A Callable wrapper for GetType that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetTypeRequestT = Model::GetTypeRequest>
        Model::GetTypeOutcomeCallable GetTypeCallable(const GetTypeRequestT& request) const
        {
            return SubmitCallable(&KeyspacesClient::GetType, request);
        }

        /**
         * An Async wrapper for GetType that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetTypeRequestT = Model::GetTypeRequest>
        void GetTypeAsync(const GetTypeRequestT& request, const GetTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KeyspacesClient::GetType, request, handler, context);
        }

        /**
         * <p>The <code>ListKeyspaces</code> operation returns a list of
         * keyspaces.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/keyspaces-2022-02-10/ListKeyspaces">AWS
         * API Reference</a></p>
         */
        virtual Model::ListKeyspacesOutcome ListKeyspaces(const Model::ListKeyspacesRequest& request = {}) const;

        /**
         * A Callable wrapper for ListKeyspaces that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListKeyspacesRequestT = Model::ListKeyspacesRequest>
        Model::ListKeyspacesOutcomeCallable ListKeyspacesCallable(const ListKeyspacesRequestT& request = {}) const
        {
            return SubmitCallable(&KeyspacesClient::ListKeyspaces, request);
        }

        /**
         * An Async wrapper for ListKeyspaces that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListKeyspacesRequestT = Model::ListKeyspacesRequest>
        void ListKeyspacesAsync(const ListKeyspacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListKeyspacesRequestT& request = {}) const
        {
            return SubmitAsync(&KeyspacesClient::ListKeyspaces, request, handler, context);
        }

        /**
         * <p>The <code>ListTables</code> operation returns a list of tables for a
         * specified keyspace.</p> <p>To read keyspace metadata using
         * <code>ListTables</code>, the IAM principal needs <code>Select</code> action
         * permissions for the system keyspace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/keyspaces-2022-02-10/ListTables">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTablesOutcome ListTables(const Model::ListTablesRequest& request) const;

        /**
         * A Callable wrapper for ListTables that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTablesRequestT = Model::ListTablesRequest>
        Model::ListTablesOutcomeCallable ListTablesCallable(const ListTablesRequestT& request) const
        {
            return SubmitCallable(&KeyspacesClient::ListTables, request);
        }

        /**
         * An Async wrapper for ListTables that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTablesRequestT = Model::ListTablesRequest>
        void ListTablesAsync(const ListTablesRequestT& request, const ListTablesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KeyspacesClient::ListTables, request, handler, context);
        }

        /**
         * <p>Returns a list of all tags associated with the specified Amazon Keyspaces
         * resource.</p> <p>To read keyspace metadata using
         * <code>ListTagsForResource</code>, the IAM principal needs <code>Select</code>
         * action permissions for the specified resource and the system
         * keyspace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/keyspaces-2022-02-10/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&KeyspacesClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KeyspacesClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p> The <code>ListTypes</code> operation returns a list of types for a specified
         * keyspace. </p> <p>To read keyspace metadata using <code>ListTypes</code>, the
         * IAM principal needs <code>Select</code> action permissions for the system
         * keyspace. To configure the required permissions, see <a
         * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/configure-udt-permissions.html#udt-permissions-view">Permissions
         * to view a UDT</a> in the <i>Amazon Keyspaces Developer Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/keyspaces-2022-02-10/ListTypes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTypesOutcome ListTypes(const Model::ListTypesRequest& request) const;

        /**
         * A Callable wrapper for ListTypes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTypesRequestT = Model::ListTypesRequest>
        Model::ListTypesOutcomeCallable ListTypesCallable(const ListTypesRequestT& request) const
        {
            return SubmitCallable(&KeyspacesClient::ListTypes, request);
        }

        /**
         * An Async wrapper for ListTypes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTypesRequestT = Model::ListTypesRequest>
        void ListTypesAsync(const ListTypesRequestT& request, const ListTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KeyspacesClient::ListTypes, request, handler, context);
        }

        /**
         * <p>Restores the table to the specified point in time within the
         * <code>earliest_restorable_timestamp</code> and the current time. For more
         * information about restore points, see <a
         * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/PointInTimeRecovery_HowItWorks.html#howitworks_backup_window">
         * Time window for PITR continuous backups</a> in the <i>Amazon Keyspaces Developer
         * Guide</i>.</p> <p>Any number of users can execute up to 4 concurrent restores
         * (any type of restore) in a given account.</p> <p>When you restore using point in
         * time recovery, Amazon Keyspaces restores your source table's schema and data to
         * the state based on the selected timestamp <code>(day:hour:minute:second)</code>
         * to a new table. The Time to Live (TTL) settings are also restored to the state
         * based on the selected timestamp.</p> <p>In addition to the table's schema, data,
         * and TTL settings, <code>RestoreTable</code> restores the capacity mode, auto
         * scaling settings, encryption settings, and point-in-time recovery settings from
         * the source table. Unlike the table's schema data and TTL settings, which are
         * restored based on the selected timestamp, these settings are always restored
         * based on the table's settings as of the current time or when the table was
         * deleted.</p> <p>You can also overwrite these settings during restore:</p> <ul>
         * <li> <p>Read/write capacity mode</p> </li> <li> <p>Provisioned throughput
         * capacity units</p> </li> <li> <p>Auto scaling settings</p> </li> <li>
         * <p>Point-in-time (PITR) settings</p> </li> <li> <p>Tags</p> </li> </ul> <p>For
         * more information, see <a
         * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/PointInTimeRecovery_HowItWorks.html#howitworks_backup_settings">PITR
         * restore settings</a> in the <i>Amazon Keyspaces Developer Guide</i>.</p> <p>Note
         * that the following settings are not restored, and you must configure them
         * manually for the new table:</p> <ul> <li> <p>Identity and Access Management
         * (IAM) policies</p> </li> <li> <p>Amazon CloudWatch metrics and alarms</p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/keyspaces-2022-02-10/RestoreTable">AWS
         * API Reference</a></p>
         */
        virtual Model::RestoreTableOutcome RestoreTable(const Model::RestoreTableRequest& request) const;

        /**
         * A Callable wrapper for RestoreTable that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RestoreTableRequestT = Model::RestoreTableRequest>
        Model::RestoreTableOutcomeCallable RestoreTableCallable(const RestoreTableRequestT& request) const
        {
            return SubmitCallable(&KeyspacesClient::RestoreTable, request);
        }

        /**
         * An Async wrapper for RestoreTable that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RestoreTableRequestT = Model::RestoreTableRequest>
        void RestoreTableAsync(const RestoreTableRequestT& request, const RestoreTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KeyspacesClient::RestoreTable, request, handler, context);
        }

        /**
         * <p>Associates a set of tags with a Amazon Keyspaces resource. You can then
         * activate these user-defined tags so that they appear on the Cost Management
         * Console for cost allocation tracking. For more information, see <a
         * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/tagging-keyspaces.html">Adding
         * tags and labels to Amazon Keyspaces resources</a> in the <i>Amazon Keyspaces
         * Developer Guide</i>.</p> <p>For IAM policy examples that show how to control
         * access to Amazon Keyspaces resources based on tags, see <a
         * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/security_iam_id-based-policy-examples.html#security_iam_id-based-policy-examples-tags">Amazon
         * Keyspaces resource access based on tags</a> in the <i>Amazon Keyspaces Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/keyspaces-2022-02-10/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&KeyspacesClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KeyspacesClient::TagResource, request, handler, context);
        }

        /**
         * <p>Removes the association of tags from a Amazon Keyspaces
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/keyspaces-2022-02-10/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&KeyspacesClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KeyspacesClient::UntagResource, request, handler, context);
        }

        /**
         * <p> Adds a new Amazon Web Services Region to the keyspace. You can add a new
         * Region to a keyspace that is either a single or a multi-Region keyspace. Amazon
         * Keyspaces is going to replicate all tables in the keyspace to the new Region. To
         * successfully replicate all tables to the new Region, they must use client-side
         * timestamps for conflict resolution. To enable client-side timestamps, specify
         * <code>clientSideTimestamps.status = enabled</code> when invoking the API. For
         * more information about client-side timestamps, see <a
         * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/client-side-timestamps.html">Client-side
         * timestamps in Amazon Keyspaces</a> in the <i>Amazon Keyspaces Developer
         * Guide</i>.</p> <p>To add a Region to a keyspace using the
         * <code>UpdateKeyspace</code> API, the IAM principal needs permissions for the
         * following IAM actions:</p> <ul> <li> <p> <code>cassandra:Alter</code> </p> </li>
         * <li> <p> <code>cassandra:AlterMultiRegionResource</code> </p> </li> <li> <p>
         * <code>cassandra:Create</code> </p> </li> <li> <p>
         * <code>cassandra:CreateMultiRegionResource</code> </p> </li> <li> <p>
         * <code>cassandra:Select</code> </p> </li> <li> <p>
         * <code>cassandra:SelectMultiRegionResource</code> </p> </li> <li> <p>
         * <code>cassandra:Modify</code> </p> </li> <li> <p>
         * <code>cassandra:ModifyMultiRegionResource</code> </p> </li> </ul> <p>If the
         * keyspace contains a table that is configured in provisioned mode with auto
         * scaling enabled, the following additional IAM actions need to be allowed.</p>
         * <ul> <li> <p> <code>application-autoscaling:RegisterScalableTarget</code> </p>
         * </li> <li> <p> <code>application-autoscaling:DeregisterScalableTarget</code>
         * </p> </li> <li> <p> <code>application-autoscaling:DescribeScalableTargets</code>
         * </p> </li> <li> <p> <code>application-autoscaling:PutScalingPolicy</code> </p>
         * </li> <li> <p> <code>application-autoscaling:DescribeScalingPolicies</code> </p>
         * </li> </ul> <p>To use the <code>UpdateKeyspace</code> API, the IAM principal
         * also needs permissions to create a service-linked role with the following
         * elements:</p> <ul> <li> <p> <code>iam:CreateServiceLinkedRole</code> - The
         * <b>action</b> the principal can perform.</p> </li> <li> <p>
         * <code>arn:aws:iam::*:role/aws-service-role/replication.cassandra.amazonaws.com/AWSServiceRoleForKeyspacesReplication</code>
         * - The <b>resource</b> that the action can be performed on. </p> </li> <li> <p>
         * <code>iam:AWSServiceName: replication.cassandra.amazonaws.com</code> - The only
         * Amazon Web Services service that this role can be attached to is Amazon
         * Keyspaces.</p> </li> </ul> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/howitworks_replication_permissions_addReplica.html">Configure
         * the IAM permissions required to add an Amazon Web Services Region to a
         * keyspace</a> in the <i>Amazon Keyspaces Developer Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/keyspaces-2022-02-10/UpdateKeyspace">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateKeyspaceOutcome UpdateKeyspace(const Model::UpdateKeyspaceRequest& request) const;

        /**
         * A Callable wrapper for UpdateKeyspace that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateKeyspaceRequestT = Model::UpdateKeyspaceRequest>
        Model::UpdateKeyspaceOutcomeCallable UpdateKeyspaceCallable(const UpdateKeyspaceRequestT& request) const
        {
            return SubmitCallable(&KeyspacesClient::UpdateKeyspace, request);
        }

        /**
         * An Async wrapper for UpdateKeyspace that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateKeyspaceRequestT = Model::UpdateKeyspaceRequest>
        void UpdateKeyspaceAsync(const UpdateKeyspaceRequestT& request, const UpdateKeyspaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KeyspacesClient::UpdateKeyspace, request, handler, context);
        }

        /**
         * <p>Adds new columns to the table or updates one of the table's settings, for
         * example capacity mode, auto scaling, encryption, point-in-time recovery, or ttl
         * settings. Note that you can only update one specific table setting per update
         * operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/keyspaces-2022-02-10/UpdateTable">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateTableOutcome UpdateTable(const Model::UpdateTableRequest& request) const;

        /**
         * A Callable wrapper for UpdateTable that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateTableRequestT = Model::UpdateTableRequest>
        Model::UpdateTableOutcomeCallable UpdateTableCallable(const UpdateTableRequestT& request) const
        {
            return SubmitCallable(&KeyspacesClient::UpdateTable, request);
        }

        /**
         * An Async wrapper for UpdateTable that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateTableRequestT = Model::UpdateTableRequest>
        void UpdateTableAsync(const UpdateTableRequestT& request, const UpdateTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KeyspacesClient::UpdateTable, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<KeyspacesEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<KeyspacesClient>;

  };

} // namespace Keyspaces
} // namespace Aws
