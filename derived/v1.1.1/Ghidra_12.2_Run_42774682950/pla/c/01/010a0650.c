/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010a0650; name: FUN_010a0650
 */


undefined1  [16]
FUN_010a0650(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            uint param_5,uint param_6)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  uint *puVar4;
  undefined1 auVar5 [16];
  undefined4 local_58;
  undefined2 local_54;
  undefined4 local_50;
  undefined2 local_4c;
  undefined8 local_48;
  
  local_4c = 0;
  local_48 = 0xffffffff00000000;
  local_54 = (undefined2)param_3;
  local_58 = param_2;
  local_50 = param_4;
  if (((*PTR_DAT_0437a708 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_0437a708), iVar1 != 0))
  {
    FUN_00100250(PTR_LAB_0437a778,PTR_DAT_0437a710,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a708);
  }
  uVar2 = *(undefined8 *)PTR_DAT_0437a710;
  *(undefined8 *)PTR_DAT_0437a718 = uVar2;
  lVar3 = FUN_010ab7dc(uVar2,&local_58);
  if (lVar3 == 0) {
    auVar5 = ZEXT816(0x3f800000);
  }
  else {
    if (*(long *)(lVar3 + 8) == 0) {
      lVar3 = 0;
    }
    else {
      puVar4 = *(uint **)(*(long *)(lVar3 + 8) + 0x250);
      lVar3 = (long)puVar4 + (ulong)*puVar4;
    }
    auVar5 = FUN_010a0490(param_1,lVar3,param_2,param_3,param_4,param_5 & 1,param_6 & 1);
  }
  return auVar5;
}


