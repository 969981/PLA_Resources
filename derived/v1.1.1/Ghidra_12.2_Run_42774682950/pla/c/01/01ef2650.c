/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ef2650; name: FUN_01ef2650
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ef2650(undefined8 param_1,undefined4 param_2,undefined1 param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined8 *local_160 [2];
  undefined4 local_150 [4];
  undefined1 *local_140;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 local_90;
  undefined4 local_8f;
  undefined1 *local_88;
  undefined1 *puStack_80;
  undefined8 local_78;
  long *local_70;
  undefined1 local_68;
  undefined4 local_64;
  undefined1 local_60;
  undefined8 local_5c;
  undefined1 local_54;
  undefined4 local_50;
  undefined2 local_4c;
  undefined8 local_38;
  
  local_150[0] = 0;
  local_140 = &DAT_cbf29ce484222645;
  local_130 = 0;
  uStack_128 = 0;
  uStack_118 = _UNK_0388a138;
  local_120 = _DAT_0388a130;
  local_110 = 0;
  uStack_108 = 0;
  local_90 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_8f = 0x101;
  local_68 = 0;
  local_60 = 0;
  local_88 = &DAT_cbf29ce484222645;
  puStack_80 = &DAT_03996322;
  local_64 = 0x43340000;
  local_78 = 0;
  local_70 = (long *)0x0;
  local_5c = 0x1000000000000;
  local_54 = 0;
  local_50 = 0;
  local_4c = 1;
  FUN_01ef27dc(param_1,local_150);
  local_4c = CONCAT11(local_4c._1_1_,param_3) & 0xff01;
  local_50 = param_2;
  FUN_01ef2358(local_160,local_150);
  if (local_160[0] != (undefined8 *)0x0) {
    piVar1 = (int *)(local_160[0] + 1);
    do {
      iVar4 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 + -1 == 0) {
      local_160[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04379498), iVar4 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar5 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar5;
      local_38 = *local_160[0];
      FUN_02a44274(lVar5 + 0xd8,&local_38);
    }
  }
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  return;
}


