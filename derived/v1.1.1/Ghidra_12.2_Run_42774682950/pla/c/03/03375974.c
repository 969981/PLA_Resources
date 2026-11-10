/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03375974; name: FUN_03375974
 */


void FUN_03375974(undefined8 *param_1)

{
  long lVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = param_1[1];
  *param_1 = &PTR_FUN_0436e1b8;
  if (lVar5 == 0) {
    return;
  }
  FUN_032da940(lVar5 + 0x58);
  FUN_032c20d0(lVar5 + 0x48);
  puVar2 = PTR_PTR_0434a080;
  *(undefined4 *)(lVar5 + 0x40) = 0;
  if ((-1 < (int)*(uint *)(lVar5 + 0x44)) && (*(long *)(lVar5 + 0x38) != 0)) {
    FUN_032cf244(puVar2,*(long *)(lVar5 + 0x38),0x10,*(uint *)(lVar5 + 0x44) & 0x3fffffff);
  }
  *(undefined8 *)(lVar5 + 0x38) = 0;
  *(undefined4 *)(lVar5 + 0x44) = 0x80000000;
  FUN_032c20d0(lVar5 + 0x28);
  *(undefined4 *)(lVar5 + 0x20) = 0;
  if ((-1 < (int)*(uint *)(lVar5 + 0x24)) && (*(long *)(lVar5 + 0x18) != 0)) {
    FUN_032cf244(puVar2,*(long *)(lVar5 + 0x18),0x10,*(uint *)(lVar5 + 0x24) & 0x3fffffff);
  }
  *(undefined8 *)(lVar5 + 0x18) = 0;
  *(undefined4 *)(lVar5 + 0x24) = 0x80000000;
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x38d490);
  if (lVar4 == 0) {
    lVar4 = FUN_0333d16c(0,1);
    *(long *)(lVar1 + 0x38d490) = lVar4;
  }
  plVar3 = *(long **)(*(long *)(lVar4 + 8) + 0x58);
                    /* WARNING: Could not recover jumptable at 0x03375a54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x18))(plVar3,lVar5,0x440);
  return;
}


