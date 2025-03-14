﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/DateTime.h>
#include <aws/accessanalyzer/model/Criterion.h>
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
namespace AccessAnalyzer
{
namespace Model
{

  /**
   * <p>Contains information about an archive rule. Archive rules automatically
   * archive new findings that meet the criteria you define when you create the
   * rule.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/ArchiveRuleSummary">AWS
   * API Reference</a></p>
   */
  class ArchiveRuleSummary
  {
  public:
    AWS_ACCESSANALYZER_API ArchiveRuleSummary();
    AWS_ACCESSANALYZER_API ArchiveRuleSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API ArchiveRuleSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the archive rule.</p>
     */
    inline const Aws::String& GetRuleName() const{ return m_ruleName; }
    inline bool RuleNameHasBeenSet() const { return m_ruleNameHasBeenSet; }
    inline void SetRuleName(const Aws::String& value) { m_ruleNameHasBeenSet = true; m_ruleName = value; }
    inline void SetRuleName(Aws::String&& value) { m_ruleNameHasBeenSet = true; m_ruleName = std::move(value); }
    inline void SetRuleName(const char* value) { m_ruleNameHasBeenSet = true; m_ruleName.assign(value); }
    inline ArchiveRuleSummary& WithRuleName(const Aws::String& value) { SetRuleName(value); return *this;}
    inline ArchiveRuleSummary& WithRuleName(Aws::String&& value) { SetRuleName(std::move(value)); return *this;}
    inline ArchiveRuleSummary& WithRuleName(const char* value) { SetRuleName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A filter used to define the archive rule.</p>
     */
    inline const Aws::Map<Aws::String, Criterion>& GetFilter() const{ return m_filter; }
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }
    inline void SetFilter(const Aws::Map<Aws::String, Criterion>& value) { m_filterHasBeenSet = true; m_filter = value; }
    inline void SetFilter(Aws::Map<Aws::String, Criterion>&& value) { m_filterHasBeenSet = true; m_filter = std::move(value); }
    inline ArchiveRuleSummary& WithFilter(const Aws::Map<Aws::String, Criterion>& value) { SetFilter(value); return *this;}
    inline ArchiveRuleSummary& WithFilter(Aws::Map<Aws::String, Criterion>&& value) { SetFilter(std::move(value)); return *this;}
    inline ArchiveRuleSummary& AddFilter(const Aws::String& key, const Criterion& value) { m_filterHasBeenSet = true; m_filter.emplace(key, value); return *this; }
    inline ArchiveRuleSummary& AddFilter(Aws::String&& key, const Criterion& value) { m_filterHasBeenSet = true; m_filter.emplace(std::move(key), value); return *this; }
    inline ArchiveRuleSummary& AddFilter(const Aws::String& key, Criterion&& value) { m_filterHasBeenSet = true; m_filter.emplace(key, std::move(value)); return *this; }
    inline ArchiveRuleSummary& AddFilter(Aws::String&& key, Criterion&& value) { m_filterHasBeenSet = true; m_filter.emplace(std::move(key), std::move(value)); return *this; }
    inline ArchiveRuleSummary& AddFilter(const char* key, Criterion&& value) { m_filterHasBeenSet = true; m_filter.emplace(key, std::move(value)); return *this; }
    inline ArchiveRuleSummary& AddFilter(const char* key, const Criterion& value) { m_filterHasBeenSet = true; m_filter.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The time at which the archive rule was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline ArchiveRuleSummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline ArchiveRuleSummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the archive rule was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }
    inline ArchiveRuleSummary& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline ArchiveRuleSummary& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_ruleName;
    bool m_ruleNameHasBeenSet = false;

    Aws::Map<Aws::String, Criterion> m_filter;
    bool m_filterHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
