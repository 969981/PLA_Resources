/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0094801c; name: FUN_0094801c
 */


void FUN_0094801c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  
  *(undefined2 *)(param_1 + 3) = 0;
  *param_1 = &PTR_LAB_041c2ae0;
  param_1[1] = &PTR_LAB_041c2bc0;
  param_1[2] = 0;
  nn::os::InitializeLightEvent((long)param_1 + 0x24,0,1);
  param_1[6] = 0;
  plVar3 = (long *)(*(code *)**(undefined8 **)(param_3 + 8))((undefined8 *)(param_3 + 8));
  if (((*PTR_DAT_04379d90 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04379d90), iVar2 != 0))
  {
    uVar5 = FUN_0087f8f0();
    *(undefined8 *)PTR_DAT_04379d98 = uVar5;
    __cxa_guard_release(PTR_DAT_04379d90);
  }
  for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
    if (plVar3 == (long *)PTR_DAT_04379d98) goto LAB_009480b0;
  }
  param_3 = 0;
LAB_009480b0:
  plVar3 = param_1 + 7;
  param_1[7] = param_3;
  param_1[9] = param_2;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  uVar4 = FUN_00949a74(param_3 + 8);
  if ((uVar4 & 1) == 0) {
    param_3 = 0;
  }
  do {
    lVar6 = param_3;
    if (lVar6 == 0) goto LAB_009480dc;
    param_3 = *(long *)(lVar6 + 0x38);
    uVar4 = FUN_00949a74(param_3 + 8);
  } while ((uVar4 & 1) != 0);
  plVar3 = (long *)(lVar6 + 0x38);
  uVar4 = (**(code **)(*(long *)*plVar3 + 0x88))();
  if ((uVar4 & 1) != 0) {
    lVar6 = *plVar3;
  }
LAB_009480dc:
  param_1[8] = lVar6;
  bVar1 = FUN_009491f4(*plVar3 + 8);
  *(byte *)(param_1 + 0xd) = bVar1 & 1;
  return;
}


