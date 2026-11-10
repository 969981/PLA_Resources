/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032b3360; name: FUN_032b3360
 */


bool FUN_032b3360(undefined8 param_1,undefined8 *param_2)

{
  bool bVar1;
  ulong uVar2;
  undefined1 auStack_40 [32];
  undefined4 local_18;
  undefined4 local_14;
  
  uVar2 = FUN_032b3580(param_1,&local_14,&local_18);
  bVar1 = (uVar2 & 1) != 0;
  if (bVar1) {
    FUN_032a6024(auStack_40);
    *(undefined4 *)(param_2 + 3) = 0x14;
    *param_2 = 0x100000001;
    *(undefined4 *)(param_2 + 1) = 1;
    *(undefined4 *)((long)param_2 + 0xc) = local_14;
    *(undefined4 *)(param_2 + 2) = local_18;
    *(undefined4 *)((long)param_2 + 0x14) = 1;
  }
  return bVar1;
}


