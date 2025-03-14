﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/EKSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eks/model/ResolveConflicts.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/eks/model/AddonPodIdentityAssociations.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace EKS
{
namespace Model
{

  /**
   */
  class UpdateAddonRequest : public EKSRequest
  {
  public:
    AWS_EKS_API UpdateAddonRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateAddon"; }

    AWS_EKS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of your cluster.</p>
     */
    inline const Aws::String& GetClusterName() const{ return m_clusterName; }
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }
    inline void SetClusterName(const Aws::String& value) { m_clusterNameHasBeenSet = true; m_clusterName = value; }
    inline void SetClusterName(Aws::String&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::move(value); }
    inline void SetClusterName(const char* value) { m_clusterNameHasBeenSet = true; m_clusterName.assign(value); }
    inline UpdateAddonRequest& WithClusterName(const Aws::String& value) { SetClusterName(value); return *this;}
    inline UpdateAddonRequest& WithClusterName(Aws::String&& value) { SetClusterName(std::move(value)); return *this;}
    inline UpdateAddonRequest& WithClusterName(const char* value) { SetClusterName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the add-on. The name must match one of the names returned by <a
     * href="https://docs.aws.amazon.com/eks/latest/APIReference/API_ListAddons.html">
     * <code>ListAddons</code> </a>.</p>
     */
    inline const Aws::String& GetAddonName() const{ return m_addonName; }
    inline bool AddonNameHasBeenSet() const { return m_addonNameHasBeenSet; }
    inline void SetAddonName(const Aws::String& value) { m_addonNameHasBeenSet = true; m_addonName = value; }
    inline void SetAddonName(Aws::String&& value) { m_addonNameHasBeenSet = true; m_addonName = std::move(value); }
    inline void SetAddonName(const char* value) { m_addonNameHasBeenSet = true; m_addonName.assign(value); }
    inline UpdateAddonRequest& WithAddonName(const Aws::String& value) { SetAddonName(value); return *this;}
    inline UpdateAddonRequest& WithAddonName(Aws::String&& value) { SetAddonName(std::move(value)); return *this;}
    inline UpdateAddonRequest& WithAddonName(const char* value) { SetAddonName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the add-on. The version must match one of the versions
     * returned by <a
     * href="https://docs.aws.amazon.com/eks/latest/APIReference/API_DescribeAddonVersions.html">
     * <code>DescribeAddonVersions</code> </a>.</p>
     */
    inline const Aws::String& GetAddonVersion() const{ return m_addonVersion; }
    inline bool AddonVersionHasBeenSet() const { return m_addonVersionHasBeenSet; }
    inline void SetAddonVersion(const Aws::String& value) { m_addonVersionHasBeenSet = true; m_addonVersion = value; }
    inline void SetAddonVersion(Aws::String&& value) { m_addonVersionHasBeenSet = true; m_addonVersion = std::move(value); }
    inline void SetAddonVersion(const char* value) { m_addonVersionHasBeenSet = true; m_addonVersion.assign(value); }
    inline UpdateAddonRequest& WithAddonVersion(const Aws::String& value) { SetAddonVersion(value); return *this;}
    inline UpdateAddonRequest& WithAddonVersion(Aws::String&& value) { SetAddonVersion(std::move(value)); return *this;}
    inline UpdateAddonRequest& WithAddonVersion(const char* value) { SetAddonVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an existing IAM role to bind to the
     * add-on's service account. The role must be assigned the IAM permissions required
     * by the add-on. If you don't specify an existing IAM role, then the add-on uses
     * the permissions assigned to the node IAM role. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/create-node-role.html">Amazon
     * EKS node IAM role</a> in the <i>Amazon EKS User Guide</i>.</p>  <p>To
     * specify an existing IAM role, you must have an IAM OpenID Connect (OIDC)
     * provider created for your cluster. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/enable-iam-roles-for-service-accounts.html">Enabling
     * IAM roles for service accounts on your cluster</a> in the <i>Amazon EKS User
     * Guide</i>.</p> 
     */
    inline const Aws::String& GetServiceAccountRoleArn() const{ return m_serviceAccountRoleArn; }
    inline bool ServiceAccountRoleArnHasBeenSet() const { return m_serviceAccountRoleArnHasBeenSet; }
    inline void SetServiceAccountRoleArn(const Aws::String& value) { m_serviceAccountRoleArnHasBeenSet = true; m_serviceAccountRoleArn = value; }
    inline void SetServiceAccountRoleArn(Aws::String&& value) { m_serviceAccountRoleArnHasBeenSet = true; m_serviceAccountRoleArn = std::move(value); }
    inline void SetServiceAccountRoleArn(const char* value) { m_serviceAccountRoleArnHasBeenSet = true; m_serviceAccountRoleArn.assign(value); }
    inline UpdateAddonRequest& WithServiceAccountRoleArn(const Aws::String& value) { SetServiceAccountRoleArn(value); return *this;}
    inline UpdateAddonRequest& WithServiceAccountRoleArn(Aws::String&& value) { SetServiceAccountRoleArn(std::move(value)); return *this;}
    inline UpdateAddonRequest& WithServiceAccountRoleArn(const char* value) { SetServiceAccountRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>How to resolve field value conflicts for an Amazon EKS add-on if you've
     * changed a value from the Amazon EKS default value. Conflicts are handled based
     * on the option you choose:</p> <ul> <li> <p> <b>None</b> – Amazon EKS doesn't
     * change the value. The update might fail.</p> </li> <li> <p> <b>Overwrite</b> –
     * Amazon EKS overwrites the changed value back to the Amazon EKS default
     * value.</p> </li> <li> <p> <b>Preserve</b> – Amazon EKS preserves the value. If
     * you choose this option, we recommend that you test any field and value changes
     * on a non-production cluster before updating the add-on on your production
     * cluster.</p> </li> </ul>
     */
    inline const ResolveConflicts& GetResolveConflicts() const{ return m_resolveConflicts; }
    inline bool ResolveConflictsHasBeenSet() const { return m_resolveConflictsHasBeenSet; }
    inline void SetResolveConflicts(const ResolveConflicts& value) { m_resolveConflictsHasBeenSet = true; m_resolveConflicts = value; }
    inline void SetResolveConflicts(ResolveConflicts&& value) { m_resolveConflictsHasBeenSet = true; m_resolveConflicts = std::move(value); }
    inline UpdateAddonRequest& WithResolveConflicts(const ResolveConflicts& value) { SetResolveConflicts(value); return *this;}
    inline UpdateAddonRequest& WithResolveConflicts(ResolveConflicts&& value) { SetResolveConflicts(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }
    inline UpdateAddonRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}
    inline UpdateAddonRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}
    inline UpdateAddonRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The set of configuration values for the add-on that's created. The values
     * that you provide are validated against the schema returned by
     * <code>DescribeAddonConfiguration</code>.</p>
     */
    inline const Aws::String& GetConfigurationValues() const{ return m_configurationValues; }
    inline bool ConfigurationValuesHasBeenSet() const { return m_configurationValuesHasBeenSet; }
    inline void SetConfigurationValues(const Aws::String& value) { m_configurationValuesHasBeenSet = true; m_configurationValues = value; }
    inline void SetConfigurationValues(Aws::String&& value) { m_configurationValuesHasBeenSet = true; m_configurationValues = std::move(value); }
    inline void SetConfigurationValues(const char* value) { m_configurationValuesHasBeenSet = true; m_configurationValues.assign(value); }
    inline UpdateAddonRequest& WithConfigurationValues(const Aws::String& value) { SetConfigurationValues(value); return *this;}
    inline UpdateAddonRequest& WithConfigurationValues(Aws::String&& value) { SetConfigurationValues(std::move(value)); return *this;}
    inline UpdateAddonRequest& WithConfigurationValues(const char* value) { SetConfigurationValues(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of Pod Identity Assocations to be updated. Each EKS Pod Identity
     * association maps a Kubernetes service account to an IAM Role. If this value is
     * left blank, no change. If an empty array is provided, existing Pod Identity
     * Assocations owned by the Addon are deleted.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/add-ons-iam.html">Attach
     * an IAM Role to an Amazon EKS add-on using Pod Identity</a> in the <i>Amazon EKS
     * User Guide</i>.</p>
     */
    inline const Aws::Vector<AddonPodIdentityAssociations>& GetPodIdentityAssociations() const{ return m_podIdentityAssociations; }
    inline bool PodIdentityAssociationsHasBeenSet() const { return m_podIdentityAssociationsHasBeenSet; }
    inline void SetPodIdentityAssociations(const Aws::Vector<AddonPodIdentityAssociations>& value) { m_podIdentityAssociationsHasBeenSet = true; m_podIdentityAssociations = value; }
    inline void SetPodIdentityAssociations(Aws::Vector<AddonPodIdentityAssociations>&& value) { m_podIdentityAssociationsHasBeenSet = true; m_podIdentityAssociations = std::move(value); }
    inline UpdateAddonRequest& WithPodIdentityAssociations(const Aws::Vector<AddonPodIdentityAssociations>& value) { SetPodIdentityAssociations(value); return *this;}
    inline UpdateAddonRequest& WithPodIdentityAssociations(Aws::Vector<AddonPodIdentityAssociations>&& value) { SetPodIdentityAssociations(std::move(value)); return *this;}
    inline UpdateAddonRequest& AddPodIdentityAssociations(const AddonPodIdentityAssociations& value) { m_podIdentityAssociationsHasBeenSet = true; m_podIdentityAssociations.push_back(value); return *this; }
    inline UpdateAddonRequest& AddPodIdentityAssociations(AddonPodIdentityAssociations&& value) { m_podIdentityAssociationsHasBeenSet = true; m_podIdentityAssociations.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet = false;

    Aws::String m_addonName;
    bool m_addonNameHasBeenSet = false;

    Aws::String m_addonVersion;
    bool m_addonVersionHasBeenSet = false;

    Aws::String m_serviceAccountRoleArn;
    bool m_serviceAccountRoleArnHasBeenSet = false;

    ResolveConflicts m_resolveConflicts;
    bool m_resolveConflictsHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    Aws::String m_configurationValues;
    bool m_configurationValuesHasBeenSet = false;

    Aws::Vector<AddonPodIdentityAssociations> m_podIdentityAssociations;
    bool m_podIdentityAssociationsHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
