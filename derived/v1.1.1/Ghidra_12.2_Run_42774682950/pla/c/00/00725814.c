/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00725814; name: FUN_00725814
 */


void FUN_00725814(long *param_1)

{
  undefined *puVar1;
  byte *pbVar2;
  long local_68;
  long lStack_60;
  long local_50;
  long lStack_48;
  
  lStack_48 = param_1[2];
  FUN_006fb578(&local_50,*(undefined8 *)(lStack_48 + 0x18));
  puVar1 = PTR_LAB_04373088;
  lStack_60 = lStack_48;
  local_68 = local_50;
  while (local_68 != 0) {
    pbVar2 = *(byte **)(local_68 + 8);
    lStack_48 = lStack_60;
    FUN_00725b40(&local_68);
    FUN_007258f0(param_1[2],&local_50);
    if ((pbVar2 != (byte *)0x0) && (*param_1 == 0)) {
      FUN_0030be58(pbVar2 + 0x18);
      if ((*pbVar2 & 1) != 0) {
        FUN_002e2ea0(puVar1,*(undefined8 *)(pbVar2 + 0x10));
      }
      FUN_002e2ea0(puVar1,pbVar2);
    }
  }
  return;
}


