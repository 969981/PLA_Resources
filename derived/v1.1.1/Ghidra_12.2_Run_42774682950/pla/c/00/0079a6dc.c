/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0079a6dc; name: FUN_0079a6dc
 */


undefined4 * FUN_0079a6dc(long *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  long lVar2;
  undefined4 *local_50 [4];
  undefined4 local_30 [2];
  undefined8 local_28;
  
  local_30[0] = *param_2;
  local_28 = 0;
  FUN_0079b228(local_50,param_1[2],local_30);
  puVar1 = *(undefined4 **)(local_50[0] + 2);
  if (puVar1 != (undefined4 *)0x0) goto LAB_0079a760;
  lVar2 = *param_1;
  if (lVar2 == 0) {
    puVar1 = (undefined4 *)FUN_002e2e80(PTR_FUN_04373078,8);
    if (puVar1 != (undefined4 *)0x0) goto LAB_0079a74c;
  }
  else {
    if (*(long *)(lVar2 + 0x70) != 0) {
      FUN_0032cf88(lVar2,0,8);
    }
    puVar1 = (undefined4 *)FUN_0032cea0(lVar2,8);
LAB_0079a74c:
    *puVar1 = *param_2;
    puVar1[1] = 0;
  }
  *(undefined4 **)(local_50[0] + 2) = puVar1;
  *local_50[0] = *puVar1;
LAB_0079a760:
  return puVar1 + 1;
}


