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

#ifndef __CLIENT_ASSETS_ZONETYPE__
#define __CLIENT_ASSETS_ZONETYPE__

#include <shared/assets/asset.h>
#include <shared/tl/array.h>
#include <shared/assets/assetpath.h>

class CAsset_ZoneType : public CAsset
{
public:
	static const int TypeId = 20;
	
	enum
	{
		TYPE_INDEX,
		TYPE_DATAINT,
		TYPE_GROUP,
	};
	
	static inline CSubPath SubPath_Index(int Id0) { return CSubPath(TYPE_INDEX, Id0, 0, 0); }
	static inline CSubPath SubPath_DataInt(int Id0) { return CSubPath(TYPE_DATAINT, Id0, 0, 0); }
	static inline CSubPath SubPath_Group(int Id0) { return CSubPath(TYPE_GROUP, Id0, 0, 0); }
	
	enum
	{
		NAME = CAsset::NAME,
		INDEX_ARRAYSIZE,
		INDEX_PTR,
		INDEX_ARRAY,
		INDEX_USED,
		INDEX_DESCRIPTION,
		INDEX_COLOR,
		INDEX_TITLE,
		INDEX_BORDERINDEX,
		INDEX_BORDERCOLOR,
		INDEX_GROUP,
		INDEX,
		IMAGEPATH,
		DATAINT_ARRAYSIZE,
		DATAINT_PTR,
		DATAINT_ARRAY,
		DATAINT_TITLE,
		DATAINT_DESCRIPTION,
		DATAINT_DEFAULTVALUE,
		DATAINT_MINVALUE,
		DATAINT_MAXVALUE,
		DATAINT_NULLVALUE,
		DATAINT,
		GROUP_ARRAYSIZE,
		GROUP_PTR,
		GROUP_ARRAY,
		GROUP,
	};
	
	class CIteratorIndex
	{
	protected:
		int m_Index;
		bool m_Reverse;
	public:
		CIteratorIndex() : m_Index(0), m_Reverse(false) {}
		CIteratorIndex(int Index, bool Reverse) : m_Index(Index), m_Reverse(Reverse) {}
		CIteratorIndex& operator++() { if(m_Reverse) m_Index--; else m_Index++; return *this; }
		CSubPath operator*() { return SubPath_Index(m_Index); }
		bool operator==(const CIteratorIndex& Iter2) { return Iter2.m_Index == m_Index; }
		bool operator!=(const CIteratorIndex& Iter2) { return Iter2.m_Index != m_Index; }
	};
	
	CIteratorIndex BeginIndex() const { return CIteratorIndex(0, false); }
	CIteratorIndex EndIndex() const { return CIteratorIndex(m_Index.size(), false); }
	CIteratorIndex ReverseBeginIndex() const { return CIteratorIndex(m_Index.size()-1, true); }
	CIteratorIndex ReverseEndIndex() const { return CIteratorIndex(-1, true); }
	
	class CIteratorDataInt
	{
	protected:
		int m_Index;
		bool m_Reverse;
	public:
		CIteratorDataInt() : m_Index(0), m_Reverse(false) {}
		CIteratorDataInt(int Index, bool Reverse) : m_Index(Index), m_Reverse(Reverse) {}
		CIteratorDataInt& operator++() { if(m_Reverse) m_Index--; else m_Index++; return *this; }
		CSubPath operator*() { return SubPath_DataInt(m_Index); }
		bool operator==(const CIteratorDataInt& Iter2) { return Iter2.m_Index == m_Index; }
		bool operator!=(const CIteratorDataInt& Iter2) { return Iter2.m_Index != m_Index; }
	};
	
	CIteratorDataInt BeginDataInt() const { return CIteratorDataInt(0, false); }
	CIteratorDataInt EndDataInt() const { return CIteratorDataInt(m_DataInt.size(), false); }
	CIteratorDataInt ReverseBeginDataInt() const { return CIteratorDataInt(m_DataInt.size()-1, true); }
	CIteratorDataInt ReverseEndDataInt() const { return CIteratorDataInt(-1, true); }
	
	class CIteratorGroup
	{
	protected:
		int m_Index;
		bool m_Reverse;
	public:
		CIteratorGroup() : m_Index(0), m_Reverse(false) {}
		CIteratorGroup(int Index, bool Reverse) : m_Index(Index), m_Reverse(Reverse) {}
		CIteratorGroup& operator++() { if(m_Reverse) m_Index--; else m_Index++; return *this; }
		CSubPath operator*() { return SubPath_Group(m_Index); }
		bool operator==(const CIteratorGroup& Iter2) { return Iter2.m_Index == m_Index; }
		bool operator!=(const CIteratorGroup& Iter2) { return Iter2.m_Index != m_Index; }
	};
	
	CIteratorGroup BeginGroup() const { return CIteratorGroup(0, false); }
	CIteratorGroup EndGroup() const { return CIteratorGroup(m_Group.size(), false); }
	CIteratorGroup ReverseBeginGroup() const { return CIteratorGroup(m_Group.size()-1, true); }
	CIteratorGroup ReverseEndGroup() const { return CIteratorGroup(-1, true); }
	
	class CIndex
	{
	public:
		class CTuaType_0_1_0
		{
		public:
			tua_uint8 m_Used;
			tua_stringid m_Description;
			tua_uint32 m_Color;
			static void Read(class CAssetsSaveLoadContext* pLoadingContext, const CTuaType_0_1_0& TuaType, CAsset_ZoneType::CIndex& SysType);
			static void Write(class CAssetsSaveLoadContext* pLoadingContext, const CAsset_ZoneType::CIndex& SysType, CTuaType_0_1_0& TuaType);
		};
		
		class CTuaType_0_2_0
		{
		public:
			tua_uint8 m_Used;
			tua_stringid m_Description;
			tua_uint32 m_Color;
			tua_stringid m_Title;
			tua_int32 m_BorderIndex;
			tua_uint32 m_BorderColor;
			static void Read(class CAssetsSaveLoadContext* pLoadingContext, const CTuaType_0_2_0& TuaType, CAsset_ZoneType::CIndex& SysType);
			static void Write(class CAssetsSaveLoadContext* pLoadingContext, const CAsset_ZoneType::CIndex& SysType, CTuaType_0_2_0& TuaType);
		};
		
		class CTuaType_0_2_1
		{
		public:
			tua_uint8 m_Used;
			tua_stringid m_Description;
			tua_uint32 m_Color;
			tua_stringid m_Title;
			tua_int32 m_BorderIndex;
			tua_uint32 m_BorderColor;
			static void Read(class CAssetsSaveLoadContext* pLoadingContext, const CTuaType_0_2_1& TuaType, CAsset_ZoneType::CIndex& SysType);
			static void Write(class CAssetsSaveLoadContext* pLoadingContext, const CAsset_ZoneType::CIndex& SysType, CTuaType_0_2_1& TuaType);
		};
		
		class CTuaType_0_2_2
		{
		public:
			tua_uint8 m_Used;
			tua_stringid m_Description;
			tua_uint32 m_Color;
			tua_stringid m_Title;
			tua_int32 m_BorderIndex;
			tua_uint32 m_BorderColor;
			tua_int32 m_Group;
			static void Read(class CAssetsSaveLoadContext* pLoadingContext, const CTuaType_0_2_2& TuaType, CAsset_ZoneType::CIndex& SysType);
			static void Write(class CAssetsSaveLoadContext* pLoadingContext, const CAsset_ZoneType::CIndex& SysType, CTuaType_0_2_2& TuaType);
		};
		
	
	private:
		bool m_Used;
		_dynamic_string<128> m_Description;
		vec4 m_Color;
		_dynamic_string<128> m_Title;
		int m_BorderIndex;
		vec4 m_BorderColor;
		int m_Group;
	
	public:
		CIndex();
		void copy(const CAsset_ZoneType::CIndex& Item)
		{
			m_Used = Item.m_Used;
			m_Description = Item.m_Description;
			m_Color = Item.m_Color;
			m_Title = Item.m_Title;
			m_BorderIndex = Item.m_BorderIndex;
			m_BorderColor = Item.m_BorderColor;
			m_Group = Item.m_Group;
		}
		
		void transfert(CAsset_ZoneType::CIndex& Item)
		{
			m_Used = std::move(Item.m_Used);
			m_Description = std::move(Item.m_Description);
			m_Color = std::move(Item.m_Color);
			m_Title = std::move(Item.m_Title);
			m_BorderIndex = std::move(Item.m_BorderIndex);
			m_BorderColor = std::move(Item.m_BorderColor);
			m_Group = std::move(Item.m_Group);
		}
		
		inline bool GetUsed() const { return m_Used; }
		
		inline const char* GetDescription() const { return m_Description.buffer(); }
		
		inline vec4 GetColor() const { return m_Color; }
		
		inline const char* GetTitle() const { return m_Title.buffer(); }
		
		inline int GetBorderIndex() const { return m_BorderIndex; }
		
		inline vec4 GetBorderColor() const { return m_BorderColor; }
		
		inline int GetGroup() const { return m_Group; }
		
		inline void SetUsed(bool Value) { m_Used = Value; }
		
		inline void SetDescription(const char* Value) { m_Description = Value; }
		
		inline void SetColor(vec4 Value) { m_Color = Value; }
		
		inline void SetTitle(const char* Value) { m_Title = Value; }
		
		inline void SetBorderIndex(int Value) { m_BorderIndex = Value; }
		
		inline void SetBorderColor(vec4 Value) { m_BorderColor = Value; }
		
		inline void SetGroup(int Value) { m_Group = Value; }
		
		void AssetPathOperation(const CAssetPath::COperation& Operation)
		{
		}
		
	};
	class CDataInt
	{
	public:
		class CTuaType_0_1_0
		{
		public:
			static void Read(class CAssetsSaveLoadContext* pLoadingContext, const CTuaType_0_1_0& TuaType, CAsset_ZoneType::CDataInt& SysType);
			static void Write(class CAssetsSaveLoadContext* pLoadingContext, const CAsset_ZoneType::CDataInt& SysType, CTuaType_0_1_0& TuaType);
		};
		
		class CTuaType_0_2_0
		{
		public:
			static void Read(class CAssetsSaveLoadContext* pLoadingContext, const CTuaType_0_2_0& TuaType, CAsset_ZoneType::CDataInt& SysType);
			static void Write(class CAssetsSaveLoadContext* pLoadingContext, const CAsset_ZoneType::CDataInt& SysType, CTuaType_0_2_0& TuaType);
		};
		
		class CTuaType_0_2_1
		{
		public:
			static void Read(class CAssetsSaveLoadContext* pLoadingContext, const CTuaType_0_2_1& TuaType, CAsset_ZoneType::CDataInt& SysType);
			static void Write(class CAssetsSaveLoadContext* pLoadingContext, const CAsset_ZoneType::CDataInt& SysType, CTuaType_0_2_1& TuaType);
		};
		
		class CTuaType_0_2_2
		{
		public:
			tua_stringid m_Title;
			tua_stringid m_Description;
			tua_int32 m_DefaultValue;
			tua_int32 m_MinValue;
			tua_int32 m_MaxValue;
			tua_int32 m_NullValue;
			static void Read(class CAssetsSaveLoadContext* pLoadingContext, const CTuaType_0_2_2& TuaType, CAsset_ZoneType::CDataInt& SysType);
			static void Write(class CAssetsSaveLoadContext* pLoadingContext, const CAsset_ZoneType::CDataInt& SysType, CTuaType_0_2_2& TuaType);
		};
		
	
	private:
		_dynamic_string<128> m_Title;
		_dynamic_string<128> m_Description;
		int m_DefaultValue;
		int m_MinValue;
		int m_MaxValue;
		int m_NullValue;
	
	public:
		CDataInt();
		void copy(const CAsset_ZoneType::CDataInt& Item)
		{
			m_Title = Item.m_Title;
			m_Description = Item.m_Description;
			m_DefaultValue = Item.m_DefaultValue;
			m_MinValue = Item.m_MinValue;
			m_MaxValue = Item.m_MaxValue;
			m_NullValue = Item.m_NullValue;
		}
		
		void transfert(CAsset_ZoneType::CDataInt& Item)
		{
			m_Title = std::move(Item.m_Title);
			m_Description = std::move(Item.m_Description);
			m_DefaultValue = std::move(Item.m_DefaultValue);
			m_MinValue = std::move(Item.m_MinValue);
			m_MaxValue = std::move(Item.m_MaxValue);
			m_NullValue = std::move(Item.m_NullValue);
		}
		
		inline const char* GetTitle() const { return m_Title.buffer(); }
		
		inline const char* GetDescription() const { return m_Description.buffer(); }
		
		inline int GetDefaultValue() const { return m_DefaultValue; }
		
		inline int GetMinValue() const { return m_MinValue; }
		
		inline int GetMaxValue() const { return m_MaxValue; }
		
		inline int GetNullValue() const { return m_NullValue; }
		
		inline void SetTitle(const char* Value) { m_Title = Value; }
		
		inline void SetDescription(const char* Value) { m_Description = Value; }
		
		inline void SetDefaultValue(int Value) { m_DefaultValue = Value; }
		
		inline void SetMinValue(int Value) { m_MinValue = Value; }
		
		inline void SetMaxValue(int Value) { m_MaxValue = Value; }
		
		inline void SetNullValue(int Value) { m_NullValue = Value; }
		
		void AssetPathOperation(const CAssetPath::COperation& Operation)
		{
		}
		
	};
	class CTuaType_0_1_0 : public CAsset::CTuaType_0_1_0
	{
	public:
		CTuaArray m_Index;
		static void Read(class CAssetsSaveLoadContext* pLoadingContext, const CTuaType_0_1_0& TuaType, CAsset_ZoneType& SysType);
		static void Write(class CAssetsSaveLoadContext* pLoadingContext, const CAsset_ZoneType& SysType, CTuaType_0_1_0& TuaType);
	};
	
	class CTuaType_0_2_0 : public CAsset::CTuaType_0_2_0
	{
	public:
		CTuaArray m_Index;
		CAssetPath::CTuaType m_ImagePath;
		static void Read(class CAssetsSaveLoadContext* pLoadingContext, const CTuaType_0_2_0& TuaType, CAsset_ZoneType& SysType);
		static void Write(class CAssetsSaveLoadContext* pLoadingContext, const CAsset_ZoneType& SysType, CTuaType_0_2_0& TuaType);
	};
	
	class CTuaType_0_2_1 : public CAsset::CTuaType_0_2_1
	{
	public:
		CTuaArray m_Index;
		CAssetPath::CTuaType m_ImagePath;
		static void Read(class CAssetsSaveLoadContext* pLoadingContext, const CTuaType_0_2_1& TuaType, CAsset_ZoneType& SysType);
		static void Write(class CAssetsSaveLoadContext* pLoadingContext, const CAsset_ZoneType& SysType, CTuaType_0_2_1& TuaType);
	};
	
	class CTuaType_0_2_2 : public CAsset::CTuaType_0_2_2
	{
	public:
		CTuaArray m_Index;
		CAssetPath::CTuaType m_ImagePath;
		CTuaArray m_DataInt;
		CTuaArray m_Group;
		static void Read(class CAssetsSaveLoadContext* pLoadingContext, const CTuaType_0_2_2& TuaType, CAsset_ZoneType& SysType);
		static void Write(class CAssetsSaveLoadContext* pLoadingContext, const CAsset_ZoneType& SysType, CTuaType_0_2_2& TuaType);
	};
	

private:
	array< CAsset_ZoneType::CIndex, allocator_copy< CAsset_ZoneType::CIndex > > m_Index;
	CAssetPath m_ImagePath;
	array< CAsset_ZoneType::CDataInt, allocator_copy< CAsset_ZoneType::CDataInt > > m_DataInt;
	array< _dynamic_string<128>, allocator_default< _dynamic_string<128> > > m_Group;

public:
	virtual ~CAsset_ZoneType() {}
	
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
	
	void copy(const CAsset_ZoneType& Item)
	{
		CAsset::copy(Item);
		m_Index.copy(Item.m_Index);
		m_ImagePath = Item.m_ImagePath;
		m_DataInt.copy(Item.m_DataInt);
		m_Group.copy(Item.m_Group);
	}
	
	void transfert(CAsset_ZoneType& Item)
	{
		CAsset::transfert(Item);
		m_Index.transfert(Item.m_Index);
		m_ImagePath = std::move(Item.m_ImagePath);
		m_DataInt.transfert(Item.m_DataInt);
		m_Group.transfert(Item.m_Group);
	}
	
	inline int GetIndexArraySize() const { return m_Index.size(); }
	
	inline const CAsset_ZoneType::CIndex* GetIndexPtr() const { return m_Index.base_ptr(); }
	
	inline const array< CAsset_ZoneType::CIndex, allocator_copy< CAsset_ZoneType::CIndex > >& GetIndexArray() const { return m_Index; }
	inline array< CAsset_ZoneType::CIndex, allocator_copy< CAsset_ZoneType::CIndex > >& GetIndexArray() { return m_Index; }
	
	inline const CAsset_ZoneType::CIndex& GetIndex(const CSubPath& SubPath) const
	{
		assert(SubPath.GetId() < m_Index.size());
		{
			return m_Index[SubPath.GetId()];
		}
	}
	
	inline bool GetIndexUsed(const CSubPath& SubPath) const
	{
		if(SubPath.GetId() < m_Index.size())
			return m_Index[SubPath.GetId()].GetUsed();
		else return false;
	}
	
	inline const char* GetIndexDescription(const CSubPath& SubPath) const
	{
		if(SubPath.GetId() < m_Index.size())
			return m_Index[SubPath.GetId()].GetDescription();
		else return NULL;
	}
	
	inline vec4 GetIndexColor(const CSubPath& SubPath) const
	{
		if(SubPath.GetId() < m_Index.size())
			return m_Index[SubPath.GetId()].GetColor();
		else return 1.0f;
	}
	
	inline const char* GetIndexTitle(const CSubPath& SubPath) const
	{
		if(SubPath.GetId() < m_Index.size())
			return m_Index[SubPath.GetId()].GetTitle();
		else return NULL;
	}
	
	inline int GetIndexBorderIndex(const CSubPath& SubPath) const
	{
		if(SubPath.GetId() < m_Index.size())
			return m_Index[SubPath.GetId()].GetBorderIndex();
		else return 0;
	}
	
	inline vec4 GetIndexBorderColor(const CSubPath& SubPath) const
	{
		if(SubPath.GetId() < m_Index.size())
			return m_Index[SubPath.GetId()].GetBorderColor();
		else return 1.0f;
	}
	
	inline int GetIndexGroup(const CSubPath& SubPath) const
	{
		if(SubPath.GetId() < m_Index.size())
			return m_Index[SubPath.GetId()].GetGroup();
		else return 0;
	}
	
	inline CAssetPath GetImagePath() const { return m_ImagePath; }
	
	inline int GetDataIntArraySize() const { return m_DataInt.size(); }
	
	inline const CAsset_ZoneType::CDataInt* GetDataIntPtr() const { return m_DataInt.base_ptr(); }
	
	inline const array< CAsset_ZoneType::CDataInt, allocator_copy< CAsset_ZoneType::CDataInt > >& GetDataIntArray() const { return m_DataInt; }
	inline array< CAsset_ZoneType::CDataInt, allocator_copy< CAsset_ZoneType::CDataInt > >& GetDataIntArray() { return m_DataInt; }
	
	inline const CAsset_ZoneType::CDataInt& GetDataInt(const CSubPath& SubPath) const
	{
		assert(SubPath.GetId() < m_DataInt.size());
		{
			return m_DataInt[SubPath.GetId()];
		}
	}
	
	inline const char* GetDataIntTitle(const CSubPath& SubPath) const
	{
		if(SubPath.GetId() < m_DataInt.size())
			return m_DataInt[SubPath.GetId()].GetTitle();
		else return NULL;
	}
	
	inline const char* GetDataIntDescription(const CSubPath& SubPath) const
	{
		if(SubPath.GetId() < m_DataInt.size())
			return m_DataInt[SubPath.GetId()].GetDescription();
		else return NULL;
	}
	
	inline int GetDataIntDefaultValue(const CSubPath& SubPath) const
	{
		if(SubPath.GetId() < m_DataInt.size())
			return m_DataInt[SubPath.GetId()].GetDefaultValue();
		else return 0;
	}
	
	inline int GetDataIntMinValue(const CSubPath& SubPath) const
	{
		if(SubPath.GetId() < m_DataInt.size())
			return m_DataInt[SubPath.GetId()].GetMinValue();
		else return 0;
	}
	
	inline int GetDataIntMaxValue(const CSubPath& SubPath) const
	{
		if(SubPath.GetId() < m_DataInt.size())
			return m_DataInt[SubPath.GetId()].GetMaxValue();
		else return 0;
	}
	
	inline int GetDataIntNullValue(const CSubPath& SubPath) const
	{
		if(SubPath.GetId() < m_DataInt.size())
			return m_DataInt[SubPath.GetId()].GetNullValue();
		else return 0;
	}
	
	inline int GetGroupArraySize() const { return m_Group.size(); }
	
	inline const _dynamic_string<128>* GetGroupPtr() const { return m_Group.base_ptr(); }
	
	inline const array< _dynamic_string<128>, allocator_default< _dynamic_string<128> > >& GetGroupArray() const { return m_Group; }
	inline array< _dynamic_string<128>, allocator_default< _dynamic_string<128> > >& GetGroupArray() { return m_Group; }
	
	inline const char* GetGroup(const CSubPath& SubPath) const
	{
		assert(SubPath.GetId() < m_Group.size());
		{
			return m_Group[SubPath.GetId()].buffer();
		}
	}
	
	inline void SetIndexArraySize(int Value) { m_Index.resize(Value); }
	
	inline void SetIndex(const CSubPath& SubPath, const CAsset_ZoneType::CIndex& Value)
	{
		if(SubPath.GetId() < m_Index.size())
		{
			m_Index[SubPath.GetId()].copy(Value);
		}
	}
	
	inline void SetIndexUsed(const CSubPath& SubPath, bool Value)
	{
		if(SubPath.GetId() < m_Index.size())
			m_Index[SubPath.GetId()].SetUsed(Value);
	}
	
	inline void SetIndexDescription(const CSubPath& SubPath, const char* Value)
	{
		if(SubPath.GetId() < m_Index.size())
			m_Index[SubPath.GetId()].SetDescription(Value);
	}
	
	inline void SetIndexColor(const CSubPath& SubPath, vec4 Value)
	{
		if(SubPath.GetId() < m_Index.size())
			m_Index[SubPath.GetId()].SetColor(Value);
	}
	
	inline void SetIndexTitle(const CSubPath& SubPath, const char* Value)
	{
		if(SubPath.GetId() < m_Index.size())
			m_Index[SubPath.GetId()].SetTitle(Value);
	}
	
	inline void SetIndexBorderIndex(const CSubPath& SubPath, int Value)
	{
		if(SubPath.GetId() < m_Index.size())
			m_Index[SubPath.GetId()].SetBorderIndex(Value);
	}
	
	inline void SetIndexBorderColor(const CSubPath& SubPath, vec4 Value)
	{
		if(SubPath.GetId() < m_Index.size())
			m_Index[SubPath.GetId()].SetBorderColor(Value);
	}
	
	inline void SetIndexGroup(const CSubPath& SubPath, int Value)
	{
		if(SubPath.GetId() < m_Index.size())
			m_Index[SubPath.GetId()].SetGroup(Value);
	}
	
	inline void SetImagePath(const CAssetPath& Value) { m_ImagePath = Value; }
	
	inline void SetDataIntArraySize(int Value) { m_DataInt.resize(Value); }
	
	inline void SetDataInt(const CSubPath& SubPath, const CAsset_ZoneType::CDataInt& Value)
	{
		if(SubPath.GetId() < m_DataInt.size())
		{
			m_DataInt[SubPath.GetId()].copy(Value);
		}
	}
	
	inline void SetDataIntTitle(const CSubPath& SubPath, const char* Value)
	{
		if(SubPath.GetId() < m_DataInt.size())
			m_DataInt[SubPath.GetId()].SetTitle(Value);
	}
	
	inline void SetDataIntDescription(const CSubPath& SubPath, const char* Value)
	{
		if(SubPath.GetId() < m_DataInt.size())
			m_DataInt[SubPath.GetId()].SetDescription(Value);
	}
	
	inline void SetDataIntDefaultValue(const CSubPath& SubPath, int Value)
	{
		if(SubPath.GetId() < m_DataInt.size())
			m_DataInt[SubPath.GetId()].SetDefaultValue(Value);
	}
	
	inline void SetDataIntMinValue(const CSubPath& SubPath, int Value)
	{
		if(SubPath.GetId() < m_DataInt.size())
			m_DataInt[SubPath.GetId()].SetMinValue(Value);
	}
	
	inline void SetDataIntMaxValue(const CSubPath& SubPath, int Value)
	{
		if(SubPath.GetId() < m_DataInt.size())
			m_DataInt[SubPath.GetId()].SetMaxValue(Value);
	}
	
	inline void SetDataIntNullValue(const CSubPath& SubPath, int Value)
	{
		if(SubPath.GetId() < m_DataInt.size())
			m_DataInt[SubPath.GetId()].SetNullValue(Value);
	}
	
	inline void SetGroupArraySize(int Value) { m_Group.resize(Value); }
	
	inline void SetGroup(const CSubPath& SubPath, const char* Value)
	{
		if(SubPath.GetId() < m_Group.size())
		{
			m_Group[SubPath.GetId()] = Value;
		}
	}
	
	inline int AddIndex()
	{
		int Id = m_Index.size();
		m_Index.increment();
		return Id;
	}
	
	inline int AddDataInt()
	{
		int Id = m_DataInt.size();
		m_DataInt.increment();
		return Id;
	}
	
	inline int AddGroup()
	{
		int Id = m_Group.size();
		m_Group.increment();
		return Id;
	}
	
	inline void AddAtIndex(int Index) { m_Index.insertat_and_init(Index); }
	
	inline void AddAtDataInt(int Index) { m_DataInt.insertat_and_init(Index); }
	
	inline void AddAtGroup(int Index) { m_Group.insertat_and_init(Index); }
	
	inline void DeleteIndex(const CSubPath& SubPath) { m_Index.remove_index(SubPath.GetId()); }
	
	inline void DeleteDataInt(const CSubPath& SubPath) { m_DataInt.remove_index(SubPath.GetId()); }
	
	inline void DeleteGroup(const CSubPath& SubPath) { m_Group.remove_index(SubPath.GetId()); }
	
	inline void RelMoveIndex(const CSubPath& SubPath, int RelMove) { m_Index.relative_move(SubPath.GetId(), RelMove); }
	
	inline void RelMoveDataInt(const CSubPath& SubPath, int RelMove) { m_DataInt.relative_move(SubPath.GetId(), RelMove); }
	
	inline void RelMoveGroup(const CSubPath& SubPath, int RelMove) { m_Group.relative_move(SubPath.GetId(), RelMove); }
	
	inline bool IsValidIndex(const CSubPath& SubPath) const { return (SubPath.IsNotNull() && SubPath.GetId() < m_Index.size()); }
	
	inline bool IsValidDataInt(const CSubPath& SubPath) const { return (SubPath.IsNotNull() && SubPath.GetId() < m_DataInt.size()); }
	
	inline bool IsValidGroup(const CSubPath& SubPath) const { return (SubPath.IsNotNull() && SubPath.GetId() < m_Group.size()); }
	
	void AssetPathOperation(const CAssetPath::COperation& Operation)
	{
		for(int i=0; i<m_Index.size(); i++)
		{
			m_Index[i].AssetPathOperation(Operation);
		}
		Operation.Apply(m_ImagePath);
		for(int i=0; i<m_DataInt.size(); i++)
		{
			m_DataInt[i].AssetPathOperation(Operation);
		}
	}
	
};

template<> int CAsset_ZoneType::GetValue(int ValueType, const CSubPath& SubPath, int DefaultValue) const;
template<> bool CAsset_ZoneType::SetValue(int ValueType, const CSubPath& SubPath, int Value);
template<> bool CAsset_ZoneType::GetValue(int ValueType, const CSubPath& SubPath, bool DefaultValue) const;
template<> bool CAsset_ZoneType::SetValue(int ValueType, const CSubPath& SubPath, bool Value);
template<> const char* CAsset_ZoneType::GetValue(int ValueType, const CSubPath& SubPath, const char* DefaultValue) const;
template<> bool CAsset_ZoneType::SetValue(int ValueType, const CSubPath& SubPath, const char* Value);
template<> vec4 CAsset_ZoneType::GetValue(int ValueType, const CSubPath& SubPath, vec4 DefaultValue) const;
template<> bool CAsset_ZoneType::SetValue(int ValueType, const CSubPath& SubPath, vec4 Value);
template<> CAssetPath CAsset_ZoneType::GetValue(int ValueType, const CSubPath& SubPath, CAssetPath DefaultValue) const;
template<> bool CAsset_ZoneType::SetValue(int ValueType, const CSubPath& SubPath, CAssetPath Value);

#endif
