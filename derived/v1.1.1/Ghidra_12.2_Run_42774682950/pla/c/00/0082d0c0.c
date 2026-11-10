/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0082d0c0; name: FUN_0082d0c0
 */


undefined8 FUN_0082d0c0(long param_1)

{
  undefined8 uVar1;
  int *piVar2;
  undefined1 auStack_48 [16];
  undefined4 local_38 [4];
  undefined4 local_28 [2];
  
  FUN_0082a238(*(undefined8 *)PTR_DAT_04377550);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  FUN_007ee578(auStack_48,param_1 + 0x94);
  FUN_007e5cac(uVar1,auStack_48);
  *(undefined8 *)(param_1 + 0x58) = 0;
  piVar2 = (int *)(param_1 + 0x60);
  if (*piVar2 == 1) {
    FUN_007e5d18(piVar2);
  }
  FUN_007e5bd8(piVar2);
  *(undefined1 *)(param_1 + 0x90) = 0;
  local_38[0] = 0;
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_28);
  FUN_007ee660(param_1 + 0x94,local_38);
  return 1;
}


