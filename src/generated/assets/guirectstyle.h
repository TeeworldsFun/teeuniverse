/*
 * Copyright (C) 2016 necropotame (necropotame@gmail.com)
 * 
 * This file is part of TeeUniverse.
 * 
 * TeeUniverse is free software: you can redistribute it and/or  modify
 * it under the terms of the GNU Affero General Public License, version 3,
 * as published by the Free Software Foundation.
 *
 * TeeUniverse is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with TeeUniverse.  If not, see <http://www.gnu.org/licenses/>.
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

#ifndef __CLIENT_ASSETS_GUIRECTSTYLE__
#define __CLIENT_ASSETS_GUIRECTSTYLE__

#include <shared/assets/asset.h>
#include <shared/math/vector.h>
#include <shared/assets/assetpath.h>

class CAsset_GuiRectStyle : public CAsset
{
public:
	enum
	{
		FLAG_BACKGROUND=1,
		FLAG_BORDER=2,
		FLAG_ROUNDCORNER=4,
		FLAG_IMAGE=8,
	};
	
	enum
	{
		BORDERFLAG_T=1,
		BORDERFLAG_B=2,
		BORDERFLAG_L=4,
		BORDERFLAG_R=8,
		
		BORDERFLAG_ALL=BORDERFLAG_T|BORDERFLAG_B|BORDERFLAG_L|BORDERFLAG_R,
	};
	
	enum
	{
		CORNERFLAG_TL=1,
		CORNERFLAG_TR=2,
		CORNERFLAG_BL=4,
		CORNERFLAG_BR=8,
	
		CORNERFLAG_T=CORNERFLAG_TL|CORNERFLAG_TR,
		CORNERFLAG_B=CORNERFLAG_BL|CORNERFLAG_BR,
		CORNERFLAG_L=CORNERFLAG_TL|CORNERFLAG_BL,
		CORNERFLAG_R=CORNERFLAG_TR|CORNERFLAG_BR,
		
		CORNERFLAG_ALL=CORNERFLAG_B|CORNERFLAG_T,
	};
	
	static const int TypeId = 8;
	
	enum
	{
		NAME = CAsset::NAME,
		FLAGS,
		BACKGROUNDCOLOR,
		BACKGROUNDPADDING,
		BORDERCOLOR,
		BORDERFLAGS,
		CORNERRADIUS,
		CORNERFLAGS,
		IMAGEPADDING,
		IMAGETPATH,
		IMAGERPATH,
		IMAGEBPATH,
		IMAGELPATH,
		IMAGETRPATH,
		IMAGEBRPATH,
		IMAGEBLPATH,
		IMAGETLPATH,
	};
	
	class CTuaType_0_1_0 : public CAsset::CTuaType_0_1_0
	{
	public:
		tua_int32 m_Flags;
		tua_uint32 m_BackgroundColor;
		tua_float m_BackgroundPadding;
		tua_uint32 m_BorderColor;
		tua_int32 m_BorderFlags;
		tua_float m_CornerRadius;
		tua_int32 m_CornerFlags;
		tua_int32 m_ImagePadding;
		CAssetPath::CTuaType m_ImageTPath;
		CAssetPath::CTuaType m_ImageRPath;
		CAssetPath::CTuaType m_ImageBPath;
		CAssetPath::CTuaType m_ImageLPath;
		CAssetPath::CTuaType m_ImageTRPath;
		CAssetPath::CTuaType m_ImageBRPath;
		CAssetPath::CTuaType m_ImageBLPath;
		CAssetPath::CTuaType m_ImageTLPath;
		static void Read(class CAssetsSaveLoadContext* pLoadingContext, const CTuaType_0_1_0& TuaType, CAsset_GuiRectStyle& SysType);
		static void Write(class CAssetsSaveLoadContext* pLoadingContext, const CAsset_GuiRectStyle& SysType, CTuaType_0_1_0& TuaType);
	};
	
	class CTuaType_0_2_0 : public CAsset::CTuaType_0_2_0
	{
	public:
		tua_int32 m_Flags;
		tua_uint32 m_BackgroundColor;
		tua_float m_BackgroundPadding;
		tua_uint32 m_BorderColor;
		tua_int32 m_BorderFlags;
		tua_float m_CornerRadius;
		tua_int32 m_CornerFlags;
		tua_int32 m_ImagePadding;
		CAssetPath::CTuaType m_ImageTPath;
		CAssetPath::CTuaType m_ImageRPath;
		CAssetPath::CTuaType m_ImageBPath;
		CAssetPath::CTuaType m_ImageLPath;
		CAssetPath::CTuaType m_ImageTRPath;
		CAssetPath::CTuaType m_ImageBRPath;
		CAssetPath::CTuaType m_ImageBLPath;
		CAssetPath::CTuaType m_ImageTLPath;
		static void Read(class CAssetsSaveLoadContext* pLoadingContext, const CTuaType_0_2_0& TuaType, CAsset_GuiRectStyle& SysType);
		static void Write(class CAssetsSaveLoadContext* pLoadingContext, const CAsset_GuiRectStyle& SysType, CTuaType_0_2_0& TuaType);
	};
	
	class CTuaType_0_2_1 : public CAsset::CTuaType_0_2_1
	{
	public:
		tua_int32 m_Flags;
		tua_uint32 m_BackgroundColor;
		tua_float m_BackgroundPadding;
		tua_uint32 m_BorderColor;
		tua_int32 m_BorderFlags;
		tua_float m_CornerRadius;
		tua_int32 m_CornerFlags;
		tua_int32 m_ImagePadding;
		CAssetPath::CTuaType m_ImageTPath;
		CAssetPath::CTuaType m_ImageRPath;
		CAssetPath::CTuaType m_ImageBPath;
		CAssetPath::CTuaType m_ImageLPath;
		CAssetPath::CTuaType m_ImageTRPath;
		CAssetPath::CTuaType m_ImageBRPath;
		CAssetPath::CTuaType m_ImageBLPath;
		CAssetPath::CTuaType m_ImageTLPath;
		static void Read(class CAssetsSaveLoadContext* pLoadingContext, const CTuaType_0_2_1& TuaType, CAsset_GuiRectStyle& SysType);
		static void Write(class CAssetsSaveLoadContext* pLoadingContext, const CAsset_GuiRectStyle& SysType, CTuaType_0_2_1& TuaType);
	};
	
	class CTuaType_0_2_2 : public CAsset::CTuaType_0_2_2
	{
	public:
		tua_int32 m_Flags;
		tua_uint32 m_BackgroundColor;
		tua_float m_BackgroundPadding;
		tua_uint32 m_BorderColor;
		tua_int32 m_BorderFlags;
		tua_float m_CornerRadius;
		tua_int32 m_CornerFlags;
		tua_int32 m_ImagePadding;
		CAssetPath::CTuaType m_ImageTPath;
		CAssetPath::CTuaType m_ImageRPath;
		CAssetPath::CTuaType m_ImageBPath;
		CAssetPath::CTuaType m_ImageLPath;
		CAssetPath::CTuaType m_ImageTRPath;
		CAssetPath::CTuaType m_ImageBRPath;
		CAssetPath::CTuaType m_ImageBLPath;
		CAssetPath::CTuaType m_ImageTLPath;
		static void Read(class CAssetsSaveLoadContext* pLoadingContext, const CTuaType_0_2_2& TuaType, CAsset_GuiRectStyle& SysType);
		static void Write(class CAssetsSaveLoadContext* pLoadingContext, const CAsset_GuiRectStyle& SysType, CTuaType_0_2_2& TuaType);
	};
	

private:
	int m_Flags;
	vec4 m_BackgroundColor;
	float m_BackgroundPadding;
	vec4 m_BorderColor;
	int m_BorderFlags;
	float m_CornerRadius;
	int m_CornerFlags;
	int m_ImagePadding;
	CAssetPath m_ImageTPath;
	CAssetPath m_ImageRPath;
	CAssetPath m_ImageBPath;
	CAssetPath m_ImageLPath;
	CAssetPath m_ImageTRPath;
	CAssetPath m_ImageBRPath;
	CAssetPath m_ImageBLPath;
	CAssetPath m_ImageTLPath;

public:
	virtual ~CAsset_GuiRectStyle() {}
	
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
	
	int AddSubItemAt(int Type, const CSubPath& SubPath, int Index);
	
	void DeleteSubItem(const CSubPath& SubPath);
	
	void RelMoveSubItem(const CSubPath& SubPath, int RelMove);
	
	CAsset_GuiRectStyle();
	void copy(const CAsset_GuiRectStyle& Item)
	{
		CAsset::copy(Item);
		m_Flags = Item.m_Flags;
		m_BackgroundColor = Item.m_BackgroundColor;
		m_BackgroundPadding = Item.m_BackgroundPadding;
		m_BorderColor = Item.m_BorderColor;
		m_BorderFlags = Item.m_BorderFlags;
		m_CornerRadius = Item.m_CornerRadius;
		m_CornerFlags = Item.m_CornerFlags;
		m_ImagePadding = Item.m_ImagePadding;
		m_ImageTPath = Item.m_ImageTPath;
		m_ImageRPath = Item.m_ImageRPath;
		m_ImageBPath = Item.m_ImageBPath;
		m_ImageLPath = Item.m_ImageLPath;
		m_ImageTRPath = Item.m_ImageTRPath;
		m_ImageBRPath = Item.m_ImageBRPath;
		m_ImageBLPath = Item.m_ImageBLPath;
		m_ImageTLPath = Item.m_ImageTLPath;
	}
	
	void transfert(CAsset_GuiRectStyle& Item)
	{
		CAsset::transfert(Item);
		m_Flags = std::move(Item.m_Flags);
		m_BackgroundColor = std::move(Item.m_BackgroundColor);
		m_BackgroundPadding = std::move(Item.m_BackgroundPadding);
		m_BorderColor = std::move(Item.m_BorderColor);
		m_BorderFlags = std::move(Item.m_BorderFlags);
		m_CornerRadius = std::move(Item.m_CornerRadius);
		m_CornerFlags = std::move(Item.m_CornerFlags);
		m_ImagePadding = std::move(Item.m_ImagePadding);
		m_ImageTPath = std::move(Item.m_ImageTPath);
		m_ImageRPath = std::move(Item.m_ImageRPath);
		m_ImageBPath = std::move(Item.m_ImageBPath);
		m_ImageLPath = std::move(Item.m_ImageLPath);
		m_ImageTRPath = std::move(Item.m_ImageTRPath);
		m_ImageBRPath = std::move(Item.m_ImageBRPath);
		m_ImageBLPath = std::move(Item.m_ImageBLPath);
		m_ImageTLPath = std::move(Item.m_ImageTLPath);
	}
	
	inline int GetFlags() const { return m_Flags; }
	
	inline vec4 GetBackgroundColor() const { return m_BackgroundColor; }
	
	inline float GetBackgroundPadding() const { return m_BackgroundPadding; }
	
	inline vec4 GetBorderColor() const { return m_BorderColor; }
	
	inline int GetBorderFlags() const { return m_BorderFlags; }
	
	inline float GetCornerRadius() const { return m_CornerRadius; }
	
	inline int GetCornerFlags() const { return m_CornerFlags; }
	
	inline int GetImagePadding() const { return m_ImagePadding; }
	
	inline CAssetPath GetImageTPath() const { return m_ImageTPath; }
	
	inline CAssetPath GetImageRPath() const { return m_ImageRPath; }
	
	inline CAssetPath GetImageBPath() const { return m_ImageBPath; }
	
	inline CAssetPath GetImageLPath() const { return m_ImageLPath; }
	
	inline CAssetPath GetImageTRPath() const { return m_ImageTRPath; }
	
	inline CAssetPath GetImageBRPath() const { return m_ImageBRPath; }
	
	inline CAssetPath GetImageBLPath() const { return m_ImageBLPath; }
	
	inline CAssetPath GetImageTLPath() const { return m_ImageTLPath; }
	
	inline void SetFlags(int Value) { m_Flags = Value; }
	
	inline void SetBackgroundColor(vec4 Value) { m_BackgroundColor = Value; }
	
	inline void SetBackgroundPadding(float Value) { m_BackgroundPadding = Value; }
	
	inline void SetBorderColor(vec4 Value) { m_BorderColor = Value; }
	
	inline void SetBorderFlags(int Value) { m_BorderFlags = Value; }
	
	inline void SetCornerRadius(float Value) { m_CornerRadius = Value; }
	
	inline void SetCornerFlags(int Value) { m_CornerFlags = Value; }
	
	inline void SetImagePadding(int Value) { m_ImagePadding = Value; }
	
	inline void SetImageTPath(const CAssetPath& Value) { m_ImageTPath = Value; }
	
	inline void SetImageRPath(const CAssetPath& Value) { m_ImageRPath = Value; }
	
	inline void SetImageBPath(const CAssetPath& Value) { m_ImageBPath = Value; }
	
	inline void SetImageLPath(const CAssetPath& Value) { m_ImageLPath = Value; }
	
	inline void SetImageTRPath(const CAssetPath& Value) { m_ImageTRPath = Value; }
	
	inline void SetImageBRPath(const CAssetPath& Value) { m_ImageBRPath = Value; }
	
	inline void SetImageBLPath(const CAssetPath& Value) { m_ImageBLPath = Value; }
	
	inline void SetImageTLPath(const CAssetPath& Value) { m_ImageTLPath = Value; }
	
	void AssetPathOperation(const CAssetPath::COperation& Operation)
	{
		Operation.Apply(m_ImageTPath);
		Operation.Apply(m_ImageRPath);
		Operation.Apply(m_ImageBPath);
		Operation.Apply(m_ImageLPath);
		Operation.Apply(m_ImageTRPath);
		Operation.Apply(m_ImageBRPath);
		Operation.Apply(m_ImageBLPath);
		Operation.Apply(m_ImageTLPath);
	}
	
};

template<> int CAsset_GuiRectStyle::GetValue(int ValueType, const CSubPath& SubPath, int DefaultValue) const;
template<> bool CAsset_GuiRectStyle::SetValue(int ValueType, const CSubPath& SubPath, int Value);
template<> float CAsset_GuiRectStyle::GetValue(int ValueType, const CSubPath& SubPath, float DefaultValue) const;
template<> bool CAsset_GuiRectStyle::SetValue(int ValueType, const CSubPath& SubPath, float Value);
template<> vec4 CAsset_GuiRectStyle::GetValue(int ValueType, const CSubPath& SubPath, vec4 DefaultValue) const;
template<> bool CAsset_GuiRectStyle::SetValue(int ValueType, const CSubPath& SubPath, vec4 Value);
template<> CAssetPath CAsset_GuiRectStyle::GetValue(int ValueType, const CSubPath& SubPath, CAssetPath DefaultValue) const;
template<> bool CAsset_GuiRectStyle::SetValue(int ValueType, const CSubPath& SubPath, CAssetPath Value);

#endif
