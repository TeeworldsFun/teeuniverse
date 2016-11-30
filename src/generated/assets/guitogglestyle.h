/*
 * Copyright (C) 2016 necropotame (necropotame@gmail.com)
 * 
 * This file is part of TeeUniverses.
 * 
 * TeeUniverses is free software: you can redistribute it and/or  modify
 * it under the terms of the GNU Affero General Public License, version 3,
 * as published by the Free Software Foundation.
 *
 * TeeUniverses is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with TeeUniverses.  If not, see <http://www.gnu.org/licenses/>.
 */

/*
 * THIS FILE HAS BEEN GENERATED BY A SCRIPT.
 * DO NOT EDIT MANUALLY!
 *
 * Please use the script "scripts/assets/assets.py" to regenerate it.
 *
 * Why this file is generated by a script?
 * Because there is more than 10 files that follow the same format.
 * In addition, each time a new member is added, enums, getter, setters,
 * copy/transfert functions and storage structure must be updated.
 * It's too much to avoid mistakes.
 */

#ifndef __CLIENT_ASSETS_GUITOGGLESTYLE__
#define __CLIENT_ASSETS_GUITOGGLESTYLE__

#include <shared/assets/asset.h>
#include <shared/assets/assetpath.h>

class CAsset_GuiToggleStyle : public CAsset
{
public:
	static const int TypeId = 12;
	
	enum
	{
		NAME = CAsset::NAME,
		IDLETRUESTYLEPATH,
		MOUSEOVERTRUESTYLEPATH,
		ICONTRUEPATH,
		IDLEFALSESTYLEPATH,
		MOUSEOVERFALSESTYLEPATH,
		ICONFALSEPATH,
		SWITCHICON,
	};
	
	class CTuaType : public CAsset::CTuaType
	{
	public:
		CAssetPath::CTuaType m_IdleTrueStylePath;
		CAssetPath::CTuaType m_MouseOverTrueStylePath;
		CAssetPath::CTuaType m_IconTruePath;
		CAssetPath::CTuaType m_IdleFalseStylePath;
		CAssetPath::CTuaType m_MouseOverFalseStylePath;
		CAssetPath::CTuaType m_IconFalsePath;
		tua_uint8 m_SwitchIcon;
		static void Read(class CAssetsSaveLoadContext* pLoadingContext, const CTuaType& TuaType, CAsset_GuiToggleStyle& SysType);
		static void Write(class CAssetsSaveLoadContext* pLoadingContext, const CAsset_GuiToggleStyle& SysType, CTuaType& TuaType);
	};
	

private:
	CAssetPath m_IdleTrueStylePath;
	CAssetPath m_MouseOverTrueStylePath;
	CAssetPath m_IconTruePath;
	CAssetPath m_IdleFalseStylePath;
	CAssetPath m_MouseOverFalseStylePath;
	CAssetPath m_IconFalsePath;
	bool m_SwitchIcon;

public:
	template<typename T>
	T GetValue(int ValueType, const CSubPath& SubPath, T DefaultValue) const
	{
		return CAsset::GetValue<T>(ValueType, SubPath, DefaultValue);
	}
	
	template<typename T>
	bool SetValue(int ValueType, const CSubPath& SubPath, T Value)
	{
		return CAsset::SetValue<T>(ValueType, SubPath, Value);
	}
	
	int AddSubItem(int Type, const CSubPath& SubPath);
	
	int DeleteSubItem(const CSubPath& SubPath);
	
	CAsset_GuiToggleStyle();
	void copy(const CAsset_GuiToggleStyle& Item)
	{
		CAsset::copy(Item);
		m_IdleTrueStylePath = Item.m_IdleTrueStylePath;
		m_MouseOverTrueStylePath = Item.m_MouseOverTrueStylePath;
		m_IconTruePath = Item.m_IconTruePath;
		m_IdleFalseStylePath = Item.m_IdleFalseStylePath;
		m_MouseOverFalseStylePath = Item.m_MouseOverFalseStylePath;
		m_IconFalsePath = Item.m_IconFalsePath;
		m_SwitchIcon = Item.m_SwitchIcon;
	}
	
	void transfert(CAsset_GuiToggleStyle& Item)
	{
		CAsset::transfert(Item);
		m_IdleTrueStylePath = Item.m_IdleTrueStylePath;
		m_MouseOverTrueStylePath = Item.m_MouseOverTrueStylePath;
		m_IconTruePath = Item.m_IconTruePath;
		m_IdleFalseStylePath = Item.m_IdleFalseStylePath;
		m_MouseOverFalseStylePath = Item.m_MouseOverFalseStylePath;
		m_IconFalsePath = Item.m_IconFalsePath;
		m_SwitchIcon = Item.m_SwitchIcon;
	}
	
	inline CAssetPath GetIdleTrueStylePath() const { return m_IdleTrueStylePath; }
	
	inline CAssetPath GetMouseOverTrueStylePath() const { return m_MouseOverTrueStylePath; }
	
	inline CAssetPath GetIconTruePath() const { return m_IconTruePath; }
	
	inline CAssetPath GetIdleFalseStylePath() const { return m_IdleFalseStylePath; }
	
	inline CAssetPath GetMouseOverFalseStylePath() const { return m_MouseOverFalseStylePath; }
	
	inline CAssetPath GetIconFalsePath() const { return m_IconFalsePath; }
	
	inline bool GetSwitchIcon() const { return m_SwitchIcon; }
	
	inline void SetIdleTrueStylePath(const CAssetPath& Value) { m_IdleTrueStylePath = Value; }
	
	inline void SetMouseOverTrueStylePath(const CAssetPath& Value) { m_MouseOverTrueStylePath = Value; }
	
	inline void SetIconTruePath(const CAssetPath& Value) { m_IconTruePath = Value; }
	
	inline void SetIdleFalseStylePath(const CAssetPath& Value) { m_IdleFalseStylePath = Value; }
	
	inline void SetMouseOverFalseStylePath(const CAssetPath& Value) { m_MouseOverFalseStylePath = Value; }
	
	inline void SetIconFalsePath(const CAssetPath& Value) { m_IconFalsePath = Value; }
	
	inline void SetSwitchIcon(bool Value) { m_SwitchIcon = Value; }
	
	void AssetPathOperation(const CAssetPath::COperation& Operation)
	{
		Operation.Apply(m_IdleTrueStylePath);
		Operation.Apply(m_MouseOverTrueStylePath);
		Operation.Apply(m_IconTruePath);
		Operation.Apply(m_IdleFalseStylePath);
		Operation.Apply(m_MouseOverFalseStylePath);
		Operation.Apply(m_IconFalsePath);
	}
	
};

template<> bool CAsset_GuiToggleStyle::GetValue(int ValueType, const CSubPath& SubPath, bool DefaultValue) const;
template<> bool CAsset_GuiToggleStyle::SetValue(int ValueType, const CSubPath& SubPath, bool Value);
template<> CAssetPath CAsset_GuiToggleStyle::GetValue(int ValueType, const CSubPath& SubPath, CAssetPath DefaultValue) const;
template<> bool CAsset_GuiToggleStyle::SetValue(int ValueType, const CSubPath& SubPath, CAssetPath Value);

#endif
