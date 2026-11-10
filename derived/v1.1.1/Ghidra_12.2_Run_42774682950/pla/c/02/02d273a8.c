/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02d273a8; name: FUN_02d273a8
 */


void FUN_02d273a8(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  long *local_70;
  char local_68 [32];
  undefined2 local_48;
  undefined2 local_44;
  
  local_88 = *param_3;
  uStack_80 = param_3[1];
  local_78 = param_3[2];
  local_70 = (long *)0x0;
  FUN_02da2ca0(local_68,&local_88);
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  if (local_68[0] == '\0') {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    plVar5 = *(long **)(param_2 + 8);
    plVar3 = (long *)(**(code **)(*plVar5 + 0x10))(plVar5,0x48,8);
    if (plVar3 == (long *)0x0) {
      plVar5 = (long *)0x0;
      uVar7 = 0;
      uVar6 = 0;
    }
    else {
      if (((*PTR_DAT_04379520 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar2 != 0)) {
        FUN_008a62a4(PTR_DAT_04379528);
        FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379520);
      }
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
      if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = plVar5;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
      *(undefined4 *)(plVar3 + 2) = 0;
      *plVar3 = (long)&PTR_LAB_04298a08;
      plVar3[1] = 0x1400000000;
      plVar3[3] = 0;
      FUN_008104e4(plVar3 + 4);
      plVar3[3] = (long)(plVar3 + 4);
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
      uVar6 = 8;
      uVar7 = 0x48;
    }
    plVar3[7] = *(long *)(param_2 + 0x9f8);
    *(ushort *)((long)plVar3 + 0x34) = *(ushort *)((long)plVar3 + 0x34) | 0x10;
    (**(code **)(*plVar3 + 0x10))(plVar3,local_48);
    (**(code **)(*plVar3 + 0x28))(plVar3,1);
    (**(code **)(*plVar3 + 0x30))(plVar3,1);
    (**(code **)(*plVar3 + 0x18))(&local_88,plVar3,local_44);
    (**(code **)(*plVar3 + 0x88))(plVar3,0,0x18);
    *param_1 = plVar3;
    param_1[1] = plVar5;
    param_1[2] = uVar7;
    param_1[3] = uVar6;
  }
  return;
}


