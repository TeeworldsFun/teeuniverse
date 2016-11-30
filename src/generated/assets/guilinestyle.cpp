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

#include <generated/assets/guilinestyle.h>
#include <shared/assets/assetssaveloadcontext.h>
#include <shared/archivefile.h>

CAsset_GuiLineStyle::CAsset_GuiLineStyle()
{
	m_Flags = 0x0;
	m_BorderColor = 1.0f;
}

void CAsset_GuiLineStyle::CTuaType::Read(CAssetsSaveLoadContext* pLoadingContext, const CTuaType& TuaType, CAsset_GuiLineStyle& SysType)
{
	CAsset::CTuaType::Read(pLoadingContext, TuaType, SysType);

	SysType.m_Flags = pLoadingContext->ArchiveFile()->ReadInt32(TuaType.m_Flags);
	SysType.m_BorderColor = pLoadingContext->ArchiveFile()->ReadColor(TuaType.m_BorderColor);
	pLoadingContext->ReadAssetPath(TuaType.m_ImageLPath, SysType.m_ImageLPath);
	pLoadingContext->ReadAssetPath(TuaType.m_ImageMPath, SysType.m_ImageMPath);
	pLoadingContext->ReadAssetPath(TuaType.m_ImageRPath, SysType.m_ImageRPath);
}

void CAsset_GuiLineStyle::CTuaType::Write(CAssetsSaveLoadContext* pLoadingContext, const CAsset_GuiLineStyle& SysType, CTuaType& TuaType)
{
	CAsset::CTuaType::Write(pLoadingContext, SysType, TuaType);

	TuaType.m_Flags = pLoadingContext->ArchiveFile()->WriteInt32(SysType.m_Flags);
	TuaType.m_BorderColor = pLoadingContext->ArchiveFile()->WriteColor(SysType.m_BorderColor);
	pLoadingContext->WriteAssetPath(SysType.m_ImageLPath, TuaType.m_ImageLPath);
	pLoadingContext->WriteAssetPath(SysType.m_ImageMPath, TuaType.m_ImageMPath);
	pLoadingContext->WriteAssetPath(SysType.m_ImageRPath, TuaType.m_ImageRPath);
}

template<>
int CAsset_GuiLineStyle::GetValue(int ValueType, const CSubPath& SubPath, int DefaultValue) const
{
	switch(ValueType)
	{
		case FLAGS:
			return GetFlags();
	}
	return CAsset::GetValue<int>(ValueType, SubPath, DefaultValue);
}

template<>
bool CAsset_GuiLineStyle::SetValue(int ValueType, const CSubPath& SubPath, int Value)
{
	switch(ValueType)
	{
		case FLAGS:
			SetFlags(Value);
			return true;
	}
	return CAsset::SetValue<int>(ValueType, SubPath, Value);
}

template<>
vec4 CAsset_GuiLineStyle::GetValue(int ValueType, const CSubPath& SubPath, vec4 DefaultValue) const
{
	switch(ValueType)
	{
		case BORDERCOLOR:
			return GetBorderColor();
	}
	return CAsset::GetValue<vec4>(ValueType, SubPath, DefaultValue);
}

template<>
bool CAsset_GuiLineStyle::SetValue(int ValueType, const CSubPath& SubPath, vec4 Value)
{
	switch(ValueType)
	{
		case BORDERCOLOR:
			SetBorderColor(Value);
			return true;
	}
	return CAsset::SetValue<vec4>(ValueType, SubPath, Value);
}

template<>
CAssetPath CAsset_GuiLineStyle::GetValue(int ValueType, const CSubPath& SubPath, CAssetPath DefaultValue) const
{
	switch(ValueType)
	{
		case IMAGELPATH:
			return GetImageLPath();
		case IMAGEMPATH:
			return GetImageMPath();
		case IMAGERPATH:
			return GetImageRPath();
	}
	return CAsset::GetValue<CAssetPath>(ValueType, SubPath, DefaultValue);
}

template<>
bool CAsset_GuiLineStyle::SetValue(int ValueType, const CSubPath& SubPath, CAssetPath Value)
{
	switch(ValueType)
	{
		case IMAGELPATH:
			SetImageLPath(Value);
			return true;
		case IMAGEMPATH:
			SetImageMPath(Value);
			return true;
		case IMAGERPATH:
			SetImageRPath(Value);
			return true;
	}
	return CAsset::SetValue<CAssetPath>(ValueType, SubPath, Value);
}

int CAsset_GuiLineStyle::AddSubItem(int Type, const CSubPath& SubPath)
{
	return -1;
}

int CAsset_GuiLineStyle::DeleteSubItem(const CSubPath& SubPath)
{
}


