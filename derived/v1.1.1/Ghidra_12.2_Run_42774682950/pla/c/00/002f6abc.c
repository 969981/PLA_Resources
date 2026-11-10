/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002f6abc; name: FUN_002f6abc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002f6abc(undefined4 *param_1,char *param_2,_func_void_void_ptr *param_3,void *param_4,
                 undefined1 *param_5,long param_6)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  size_t sVar5;
  void *pvVar6;
  undefined1 uVar7;
  ulong uVar8;
  char local_80 [8];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined2 *)(param_1 + 4) = 0x101;
  puVar3 = (undefined8 *)FUN_002e2e80(PTR_FUN_04373078,0x1d8);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 2) = 0;
    *param_1 = 4;
    *(undefined8 *)(param_1 + 2) = 0;
  }
  else {
    uVar8 = *(ulong *)(param_6 + 8);
    *puVar3 = &PTR_FUN_04153188;
    *(undefined1 *)(puVar3 + 0x3a) = 0;
    if (uVar8 == 0) {
      if (((DAT_0438f8d8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0438f8d8), iVar1 != 0)) {
        DAT_0438f8e0 = 0x10000;
        DAT_0438f8f0 = 6;
        DAT_0438f8e8 = DAT_0388a670;
        __cxa_guard_release(&DAT_0438f8d8);
      }
      uVar8 = DAT_0438f8e0;
    }
    lVar4 = FUN_002ebd50(uVar8 + 0xfff);
    puVar3[0x39] = lVar4;
    pvVar6 = (void *)(lVar4 + 0xfffU & 0xfffffffffffff000);
    if (((DAT_0438f8d8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0438f8d8), iVar1 != 0)) {
      DAT_0438f8e0 = 0x10000;
      DAT_0438f8f0 = 6;
      DAT_0438f8e8 = DAT_0388a670;
      __cxa_guard_release(&DAT_0438f8d8);
      if (-1 < DAT_0438f8e8) goto LAB_002f6b6c;
LAB_002f6c78:
      if (((DAT_0438f8d8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0438f8d8), iVar1 != 0)) {
        DAT_0438f8e0 = 0x10000;
        DAT_0438f8f0 = 6;
        DAT_0438f8e8 = DAT_0388a670;
        __cxa_guard_release(&DAT_0438f8d8);
      }
      iVar1 = nn::os::CreateThread
                        ((ThreadType *)(puVar3 + 1),param_3,param_4,pvVar6,uVar8,(int)DAT_0438f8e8);
      *(bool *)(puVar3 + 0x3a) = iVar1 == 0;
    }
    else {
      if (DAT_0438f8e8 < 0) goto LAB_002f6c78;
LAB_002f6b6c:
      if (((DAT_0438f8d8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0438f8d8), iVar1 != 0)) {
        DAT_0438f8e0 = 0x10000;
        DAT_0438f8f0 = 6;
        DAT_0438f8e8 = DAT_0388a670;
        __cxa_guard_release(&DAT_0438f8d8);
        iVar1 = (int)DAT_0438f8e8;
      }
      else {
        iVar1 = (int)DAT_0438f8e8;
      }
      if (((DAT_0438f8d8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0438f8d8), iVar2 != 0)) {
        DAT_0438f8e0 = 0x10000;
        DAT_0438f8f0 = 6;
        DAT_0438f8e8 = DAT_0388a670;
        __cxa_guard_release();
      }
      iVar1 = nn::os::CreateThread
                        ((ThreadType *)(puVar3 + 1),param_3,param_4,pvVar6,uVar8,iVar1,
                         DAT_0438f8e8._4_4_);
      *(bool *)(puVar3 + 0x3a) = iVar1 == 0;
    }
    if (iVar1 == 0) {
      if (((DAT_0438f8d8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0438f8d8), iVar1 != 0)) {
        DAT_0438f8e0 = 0x10000;
        DAT_0438f8f0 = 6;
        DAT_0438f8e8 = DAT_0388a670;
        __cxa_guard_release(&DAT_0438f8d8);
      }
      if (DAT_0438f8f0 != 0) {
        if (((DAT_0438f8d8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0438f8d8), iVar1 != 0)) {
          DAT_0438f8e0 = 0x10000;
          DAT_0438f8f0 = 6;
          DAT_0438f8e8 = DAT_0388a670;
          __cxa_guard_release(&DAT_0438f8d8);
          iVar1 = DAT_0438f8e8._4_4_;
        }
        else {
          iVar1 = DAT_0438f8e8._4_4_;
        }
        if (((DAT_0438f8d8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0438f8d8), iVar2 != 0)) {
          DAT_0438f8e0 = 0x10000;
          DAT_0438f8f0 = 6;
          DAT_0438f8e8 = DAT_0388a670;
          __cxa_guard_release(&DAT_0438f8d8);
        }
        nn::os::SetThreadCoreMask((ThreadType *)(puVar3 + 1),iVar1,DAT_0438f8f0);
      }
      uStack_78 = ram0x03888a28;
      local_80[0] = s_npln_grpc_03888a20[0];
      local_80[1] = s_npln_grpc_03888a20[1];
      local_80[2] = s_npln_grpc_03888a20[2];
      local_80[3] = s_npln_grpc_03888a20[3];
      local_80[4] = s_npln_grpc_03888a20[4];
      local_80[5] = s_npln_grpc_03888a20[5];
      local_80[6] = s_npln_grpc_03888a20[6];
      local_80[7] = s_npln_grpc_03888a20[7];
      uStack_68 = _UNK_03888a38;
      uStack_70 = _DAT_03888a30;
      sVar5 = strlen(local_80);
      strncat(local_80,param_2,0x1f - sVar5);
      nn::os::SetThreadName((ThreadType *)(puVar3 + 1),local_80);
      *(undefined8 **)(param_1 + 2) = puVar3;
      uVar7 = 1;
      *param_1 = 1;
      goto joined_r0x002f6d2c;
    }
    *(undefined8 **)(param_1 + 2) = puVar3;
    *param_1 = 4;
    (**(code **)*puVar3)(puVar3);
    FUN_002e2ea0(PTR_LAB_04373088,puVar3);
    *(undefined8 *)(param_1 + 2) = 0;
  }
  uVar7 = 0;
joined_r0x002f6d2c:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar7;
  }
  return;
}


