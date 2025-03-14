﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-autoscaling/ApplicationAutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/application-autoscaling/model/ServiceNamespace.h>
#include <aws/application-autoscaling/model/ScalableDimension.h>
#include <aws/application-autoscaling/model/PolicyType.h>
#include <aws/application-autoscaling/model/StepScalingPolicyConfiguration.h>
#include <aws/application-autoscaling/model/TargetTrackingScalingPolicyConfiguration.h>
#include <aws/application-autoscaling/model/PredictiveScalingPolicyConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/application-autoscaling/model/Alarm.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ApplicationAutoScaling
{
namespace Model
{

  /**
   * <p>Represents a scaling policy to use with Application Auto Scaling.</p> <p>For
   * more information about configuring scaling policies for a specific service, see
   * <a
   * href="https://docs.aws.amazon.com/autoscaling/application/userguide/integrated-services-list.html">Amazon
   * Web Services services that you can use with Application Auto Scaling</a> in the
   * <i>Application Auto Scaling User Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/application-autoscaling-2016-02-06/ScalingPolicy">AWS
   * API Reference</a></p>
   */
  class ScalingPolicy
  {
  public:
    AWS_APPLICATIONAUTOSCALING_API ScalingPolicy();
    AWS_APPLICATIONAUTOSCALING_API ScalingPolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONAUTOSCALING_API ScalingPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONAUTOSCALING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the scaling policy.</p>
     */
    inline const Aws::String& GetPolicyARN() const{ return m_policyARN; }
    inline bool PolicyARNHasBeenSet() const { return m_policyARNHasBeenSet; }
    inline void SetPolicyARN(const Aws::String& value) { m_policyARNHasBeenSet = true; m_policyARN = value; }
    inline void SetPolicyARN(Aws::String&& value) { m_policyARNHasBeenSet = true; m_policyARN = std::move(value); }
    inline void SetPolicyARN(const char* value) { m_policyARNHasBeenSet = true; m_policyARN.assign(value); }
    inline ScalingPolicy& WithPolicyARN(const Aws::String& value) { SetPolicyARN(value); return *this;}
    inline ScalingPolicy& WithPolicyARN(Aws::String&& value) { SetPolicyARN(std::move(value)); return *this;}
    inline ScalingPolicy& WithPolicyARN(const char* value) { SetPolicyARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the scaling policy.</p>
     */
    inline const Aws::String& GetPolicyName() const{ return m_policyName; }
    inline bool PolicyNameHasBeenSet() const { return m_policyNameHasBeenSet; }
    inline void SetPolicyName(const Aws::String& value) { m_policyNameHasBeenSet = true; m_policyName = value; }
    inline void SetPolicyName(Aws::String&& value) { m_policyNameHasBeenSet = true; m_policyName = std::move(value); }
    inline void SetPolicyName(const char* value) { m_policyNameHasBeenSet = true; m_policyName.assign(value); }
    inline ScalingPolicy& WithPolicyName(const Aws::String& value) { SetPolicyName(value); return *this;}
    inline ScalingPolicy& WithPolicyName(Aws::String&& value) { SetPolicyName(std::move(value)); return *this;}
    inline ScalingPolicy& WithPolicyName(const char* value) { SetPolicyName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The namespace of the Amazon Web Services service that provides the resource,
     * or a <code>custom-resource</code>.</p>
     */
    inline const ServiceNamespace& GetServiceNamespace() const{ return m_serviceNamespace; }
    inline bool ServiceNamespaceHasBeenSet() const { return m_serviceNamespaceHasBeenSet; }
    inline void SetServiceNamespace(const ServiceNamespace& value) { m_serviceNamespaceHasBeenSet = true; m_serviceNamespace = value; }
    inline void SetServiceNamespace(ServiceNamespace&& value) { m_serviceNamespaceHasBeenSet = true; m_serviceNamespace = std::move(value); }
    inline ScalingPolicy& WithServiceNamespace(const ServiceNamespace& value) { SetServiceNamespace(value); return *this;}
    inline ScalingPolicy& WithServiceNamespace(ServiceNamespace&& value) { SetServiceNamespace(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the resource associated with the scaling policy. This
     * string consists of the resource type and unique identifier.</p> <ul> <li> <p>ECS
     * service - The resource type is <code>service</code> and the unique identifier is
     * the cluster name and service name. Example:
     * <code>service/my-cluster/my-service</code>.</p> </li> <li> <p>Spot Fleet - The
     * resource type is <code>spot-fleet-request</code> and the unique identifier is
     * the Spot Fleet request ID. Example:
     * <code>spot-fleet-request/sfr-73fbd2ce-aa30-494c-8788-1cee4EXAMPLE</code>.</p>
     * </li> <li> <p>EMR cluster - The resource type is <code>instancegroup</code> and
     * the unique identifier is the cluster ID and instance group ID. Example:
     * <code>instancegroup/j-2EEZNYKUA1NTV/ig-1791Y4E1L8YI0</code>.</p> </li> <li>
     * <p>AppStream 2.0 fleet - The resource type is <code>fleet</code> and the unique
     * identifier is the fleet name. Example: <code>fleet/sample-fleet</code>.</p>
     * </li> <li> <p>DynamoDB table - The resource type is <code>table</code> and the
     * unique identifier is the table name. Example: <code>table/my-table</code>.</p>
     * </li> <li> <p>DynamoDB global secondary index - The resource type is
     * <code>index</code> and the unique identifier is the index name. Example:
     * <code>table/my-table/index/my-table-index</code>.</p> </li> <li> <p>Aurora DB
     * cluster - The resource type is <code>cluster</code> and the unique identifier is
     * the cluster name. Example: <code>cluster:my-db-cluster</code>.</p> </li> <li>
     * <p>SageMaker endpoint variant - The resource type is <code>variant</code> and
     * the unique identifier is the resource ID. Example:
     * <code>endpoint/my-end-point/variant/KMeansClustering</code>.</p> </li> <li>
     * <p>Custom resources are not supported with a resource type. This parameter must
     * specify the <code>OutputValue</code> from the CloudFormation template stack used
     * to access the resources. The unique identifier is defined by the service
     * provider. More information is available in our <a
     * href="https://github.com/aws/aws-auto-scaling-custom-resource">GitHub
     * repository</a>.</p> </li> <li> <p>Amazon Comprehend document classification
     * endpoint - The resource type and unique identifier are specified using the
     * endpoint ARN. Example:
     * <code>arn:aws:comprehend:us-west-2:123456789012:document-classifier-endpoint/EXAMPLE</code>.</p>
     * </li> <li> <p>Amazon Comprehend entity recognizer endpoint - The resource type
     * and unique identifier are specified using the endpoint ARN. Example:
     * <code>arn:aws:comprehend:us-west-2:123456789012:entity-recognizer-endpoint/EXAMPLE</code>.</p>
     * </li> <li> <p>Lambda provisioned concurrency - The resource type is
     * <code>function</code> and the unique identifier is the function name with a
     * function version or alias name suffix that is not <code>$LATEST</code>. Example:
     * <code>function:my-function:prod</code> or
     * <code>function:my-function:1</code>.</p> </li> <li> <p>Amazon Keyspaces table -
     * The resource type is <code>table</code> and the unique identifier is the table
     * name. Example: <code>keyspace/mykeyspace/table/mytable</code>.</p> </li> <li>
     * <p>Amazon MSK cluster - The resource type and unique identifier are specified
     * using the cluster ARN. Example:
     * <code>arn:aws:kafka:us-east-1:123456789012:cluster/demo-cluster-1/6357e0b2-0e6a-4b86-a0b4-70df934c2e31-5</code>.</p>
     * </li> <li> <p>Amazon ElastiCache replication group - The resource type is
     * <code>replication-group</code> and the unique identifier is the replication
     * group name. Example: <code>replication-group/mycluster</code>.</p> </li> <li>
     * <p>Neptune cluster - The resource type is <code>cluster</code> and the unique
     * identifier is the cluster name. Example: <code>cluster:mycluster</code>.</p>
     * </li> <li> <p>SageMaker serverless endpoint - The resource type is
     * <code>variant</code> and the unique identifier is the resource ID. Example:
     * <code>endpoint/my-end-point/variant/KMeansClustering</code>.</p> </li> <li>
     * <p>SageMaker inference component - The resource type is
     * <code>inference-component</code> and the unique identifier is the resource ID.
     * Example: <code>inference-component/my-inference-component</code>.</p> </li> <li>
     * <p>Pool of WorkSpaces - The resource type is <code>workspacespool</code> and the
     * unique identifier is the pool ID. Example:
     * <code>workspacespool/wspool-123456</code>.</p> </li> </ul>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }
    inline ScalingPolicy& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}
    inline ScalingPolicy& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}
    inline ScalingPolicy& WithResourceId(const char* value) { SetResourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The scalable dimension. This string consists of the service namespace,
     * resource type, and scaling property.</p> <ul> <li> <p>
     * <code>ecs:service:DesiredCount</code> - The task count of an ECS service.</p>
     * </li> <li> <p> <code>elasticmapreduce:instancegroup:InstanceCount</code> - The
     * instance count of an EMR Instance Group.</p> </li> <li> <p>
     * <code>ec2:spot-fleet-request:TargetCapacity</code> - The target capacity of a
     * Spot Fleet.</p> </li> <li> <p> <code>appstream:fleet:DesiredCapacity</code> -
     * The capacity of an AppStream 2.0 fleet.</p> </li> <li> <p>
     * <code>dynamodb:table:ReadCapacityUnits</code> - The provisioned read capacity
     * for a DynamoDB table.</p> </li> <li> <p>
     * <code>dynamodb:table:WriteCapacityUnits</code> - The provisioned write capacity
     * for a DynamoDB table.</p> </li> <li> <p>
     * <code>dynamodb:index:ReadCapacityUnits</code> - The provisioned read capacity
     * for a DynamoDB global secondary index.</p> </li> <li> <p>
     * <code>dynamodb:index:WriteCapacityUnits</code> - The provisioned write capacity
     * for a DynamoDB global secondary index.</p> </li> <li> <p>
     * <code>rds:cluster:ReadReplicaCount</code> - The count of Aurora Replicas in an
     * Aurora DB cluster. Available for Aurora MySQL-compatible edition and Aurora
     * PostgreSQL-compatible edition.</p> </li> <li> <p>
     * <code>sagemaker:variant:DesiredInstanceCount</code> - The number of EC2
     * instances for a SageMaker model endpoint variant.</p> </li> <li> <p>
     * <code>custom-resource:ResourceType:Property</code> - The scalable dimension for
     * a custom resource provided by your own application or service.</p> </li> <li>
     * <p> <code>comprehend:document-classifier-endpoint:DesiredInferenceUnits</code> -
     * The number of inference units for an Amazon Comprehend document classification
     * endpoint.</p> </li> <li> <p>
     * <code>comprehend:entity-recognizer-endpoint:DesiredInferenceUnits</code> - The
     * number of inference units for an Amazon Comprehend entity recognizer
     * endpoint.</p> </li> <li> <p> <code>lambda:function:ProvisionedConcurrency</code>
     * - The provisioned concurrency for a Lambda function.</p> </li> <li> <p>
     * <code>cassandra:table:ReadCapacityUnits</code> - The provisioned read capacity
     * for an Amazon Keyspaces table.</p> </li> <li> <p>
     * <code>cassandra:table:WriteCapacityUnits</code> - The provisioned write capacity
     * for an Amazon Keyspaces table.</p> </li> <li> <p>
     * <code>kafka:broker-storage:VolumeSize</code> - The provisioned volume size (in
     * GiB) for brokers in an Amazon MSK cluster.</p> </li> <li> <p>
     * <code>elasticache:replication-group:NodeGroups</code> - The number of node
     * groups for an Amazon ElastiCache replication group.</p> </li> <li> <p>
     * <code>elasticache:replication-group:Replicas</code> - The number of replicas per
     * node group for an Amazon ElastiCache replication group.</p> </li> <li> <p>
     * <code>neptune:cluster:ReadReplicaCount</code> - The count of read replicas in an
     * Amazon Neptune DB cluster.</p> </li> <li> <p>
     * <code>sagemaker:variant:DesiredProvisionedConcurrency</code> - The provisioned
     * concurrency for a SageMaker serverless endpoint.</p> </li> <li> <p>
     * <code>sagemaker:inference-component:DesiredCopyCount</code> - The number of
     * copies across an endpoint for a SageMaker inference component.</p> </li> <li>
     * <p> <code>workspaces:workspacespool:DesiredUserSessions</code> - The number of
     * user sessions for the WorkSpaces in the pool.</p> </li> </ul>
     */
    inline const ScalableDimension& GetScalableDimension() const{ return m_scalableDimension; }
    inline bool ScalableDimensionHasBeenSet() const { return m_scalableDimensionHasBeenSet; }
    inline void SetScalableDimension(const ScalableDimension& value) { m_scalableDimensionHasBeenSet = true; m_scalableDimension = value; }
    inline void SetScalableDimension(ScalableDimension&& value) { m_scalableDimensionHasBeenSet = true; m_scalableDimension = std::move(value); }
    inline ScalingPolicy& WithScalableDimension(const ScalableDimension& value) { SetScalableDimension(value); return *this;}
    inline ScalingPolicy& WithScalableDimension(ScalableDimension&& value) { SetScalableDimension(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The scaling policy type.</p> <p>The following policy types are supported:
     * </p> <p> <code>TargetTrackingScaling</code>—Not supported for Amazon EMR</p> <p>
     * <code>StepScaling</code>—Not supported for DynamoDB, Amazon Comprehend, Lambda,
     * Amazon Keyspaces, Amazon MSK, Amazon ElastiCache, or Neptune.</p>
     */
    inline const PolicyType& GetPolicyType() const{ return m_policyType; }
    inline bool PolicyTypeHasBeenSet() const { return m_policyTypeHasBeenSet; }
    inline void SetPolicyType(const PolicyType& value) { m_policyTypeHasBeenSet = true; m_policyType = value; }
    inline void SetPolicyType(PolicyType&& value) { m_policyTypeHasBeenSet = true; m_policyType = std::move(value); }
    inline ScalingPolicy& WithPolicyType(const PolicyType& value) { SetPolicyType(value); return *this;}
    inline ScalingPolicy& WithPolicyType(PolicyType&& value) { SetPolicyType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A step scaling policy.</p>
     */
    inline const StepScalingPolicyConfiguration& GetStepScalingPolicyConfiguration() const{ return m_stepScalingPolicyConfiguration; }
    inline bool StepScalingPolicyConfigurationHasBeenSet() const { return m_stepScalingPolicyConfigurationHasBeenSet; }
    inline void SetStepScalingPolicyConfiguration(const StepScalingPolicyConfiguration& value) { m_stepScalingPolicyConfigurationHasBeenSet = true; m_stepScalingPolicyConfiguration = value; }
    inline void SetStepScalingPolicyConfiguration(StepScalingPolicyConfiguration&& value) { m_stepScalingPolicyConfigurationHasBeenSet = true; m_stepScalingPolicyConfiguration = std::move(value); }
    inline ScalingPolicy& WithStepScalingPolicyConfiguration(const StepScalingPolicyConfiguration& value) { SetStepScalingPolicyConfiguration(value); return *this;}
    inline ScalingPolicy& WithStepScalingPolicyConfiguration(StepScalingPolicyConfiguration&& value) { SetStepScalingPolicyConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A target tracking scaling policy.</p>
     */
    inline const TargetTrackingScalingPolicyConfiguration& GetTargetTrackingScalingPolicyConfiguration() const{ return m_targetTrackingScalingPolicyConfiguration; }
    inline bool TargetTrackingScalingPolicyConfigurationHasBeenSet() const { return m_targetTrackingScalingPolicyConfigurationHasBeenSet; }
    inline void SetTargetTrackingScalingPolicyConfiguration(const TargetTrackingScalingPolicyConfiguration& value) { m_targetTrackingScalingPolicyConfigurationHasBeenSet = true; m_targetTrackingScalingPolicyConfiguration = value; }
    inline void SetTargetTrackingScalingPolicyConfiguration(TargetTrackingScalingPolicyConfiguration&& value) { m_targetTrackingScalingPolicyConfigurationHasBeenSet = true; m_targetTrackingScalingPolicyConfiguration = std::move(value); }
    inline ScalingPolicy& WithTargetTrackingScalingPolicyConfiguration(const TargetTrackingScalingPolicyConfiguration& value) { SetTargetTrackingScalingPolicyConfiguration(value); return *this;}
    inline ScalingPolicy& WithTargetTrackingScalingPolicyConfiguration(TargetTrackingScalingPolicyConfiguration&& value) { SetTargetTrackingScalingPolicyConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The predictive scaling policy configuration. </p>
     */
    inline const PredictiveScalingPolicyConfiguration& GetPredictiveScalingPolicyConfiguration() const{ return m_predictiveScalingPolicyConfiguration; }
    inline bool PredictiveScalingPolicyConfigurationHasBeenSet() const { return m_predictiveScalingPolicyConfigurationHasBeenSet; }
    inline void SetPredictiveScalingPolicyConfiguration(const PredictiveScalingPolicyConfiguration& value) { m_predictiveScalingPolicyConfigurationHasBeenSet = true; m_predictiveScalingPolicyConfiguration = value; }
    inline void SetPredictiveScalingPolicyConfiguration(PredictiveScalingPolicyConfiguration&& value) { m_predictiveScalingPolicyConfigurationHasBeenSet = true; m_predictiveScalingPolicyConfiguration = std::move(value); }
    inline ScalingPolicy& WithPredictiveScalingPolicyConfiguration(const PredictiveScalingPolicyConfiguration& value) { SetPredictiveScalingPolicyConfiguration(value); return *this;}
    inline ScalingPolicy& WithPredictiveScalingPolicyConfiguration(PredictiveScalingPolicyConfiguration&& value) { SetPredictiveScalingPolicyConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CloudWatch alarms associated with the scaling policy.</p>
     */
    inline const Aws::Vector<Alarm>& GetAlarms() const{ return m_alarms; }
    inline bool AlarmsHasBeenSet() const { return m_alarmsHasBeenSet; }
    inline void SetAlarms(const Aws::Vector<Alarm>& value) { m_alarmsHasBeenSet = true; m_alarms = value; }
    inline void SetAlarms(Aws::Vector<Alarm>&& value) { m_alarmsHasBeenSet = true; m_alarms = std::move(value); }
    inline ScalingPolicy& WithAlarms(const Aws::Vector<Alarm>& value) { SetAlarms(value); return *this;}
    inline ScalingPolicy& WithAlarms(Aws::Vector<Alarm>&& value) { SetAlarms(std::move(value)); return *this;}
    inline ScalingPolicy& AddAlarms(const Alarm& value) { m_alarmsHasBeenSet = true; m_alarms.push_back(value); return *this; }
    inline ScalingPolicy& AddAlarms(Alarm&& value) { m_alarmsHasBeenSet = true; m_alarms.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp for when the scaling policy was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline ScalingPolicy& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline ScalingPolicy& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_policyARN;
    bool m_policyARNHasBeenSet = false;

    Aws::String m_policyName;
    bool m_policyNameHasBeenSet = false;

    ServiceNamespace m_serviceNamespace;
    bool m_serviceNamespaceHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    ScalableDimension m_scalableDimension;
    bool m_scalableDimensionHasBeenSet = false;

    PolicyType m_policyType;
    bool m_policyTypeHasBeenSet = false;

    StepScalingPolicyConfiguration m_stepScalingPolicyConfiguration;
    bool m_stepScalingPolicyConfigurationHasBeenSet = false;

    TargetTrackingScalingPolicyConfiguration m_targetTrackingScalingPolicyConfiguration;
    bool m_targetTrackingScalingPolicyConfigurationHasBeenSet = false;

    PredictiveScalingPolicyConfiguration m_predictiveScalingPolicyConfiguration;
    bool m_predictiveScalingPolicyConfigurationHasBeenSet = false;

    Aws::Vector<Alarm> m_alarms;
    bool m_alarmsHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationAutoScaling
} // namespace Aws
