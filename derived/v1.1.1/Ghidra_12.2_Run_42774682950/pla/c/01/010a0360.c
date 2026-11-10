/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010a0360; name: FUN_010a0360
 */


ulong FUN_010a0360(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4,
                  uint param_5)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  uint *puVar4;
  int *piVar5;
  ulong uVar6;
  undefined4 local_58;
  undefined2 local_54;
  undefined4 local_50;
  undefined2 local_4c;
  undefined8 local_48;
  
  local_4c = 0;
  local_48 = 0xffffffff00000000;
  local_54 = (undefined2)param_2;
  local_58 = param_1;
  local_50 = param_3;
  if (((*PTR_DAT_0437a708 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_0437a708), iVar1 != 0))
  {
    FUN_00100250(PTR_LAB_0437a778,PTR_DAT_0437a710,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a708);
  }
  uVar2 = *(undefined8 *)PTR_DAT_0437a710;
  *(undefined8 *)PTR_DAT_0437a718 = uVar2;
  lVar3 = FUN_010ab7dc(uVar2,&local_58);
  if (lVar3 != 0) {
    piVar5 = (int *)0x0;
    if (*(long *)(lVar3 + 8) != 0) {
      puVar4 = *(uint **)(*(long *)(lVar3 + 8) + 0x250);
      piVar5 = (int *)((long)puVar4 + (ulong)*puVar4);
    }
    if (((param_4 & 1) != 0) || ((param_5 & 1) != 0)) {
      uVar6 = FUN_010a01f0(param_1,param_2,param_3);
      return uVar6;
    }
    if ((4 < *(ushort *)((long)piVar5 - (long)*piVar5)) &&
       (uVar6 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[2], uVar6 != 0)) {
      return (ulong)*(byte *)((long)piVar5 + uVar6);
    }
  }
  return 1;
}


