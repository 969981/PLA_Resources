/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0126bff0; name: FUN_0126bff0
 */


undefined1 * FUN_0126bff0(int param_1,long param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  undefined1 *puVar3;
  byte *pbVar4;
  
  if (param_1 == 0) {
    puVar1 = (undefined8 *)PTR_PTR_04379d00;
    if (*(long *)(param_2 + 0x10) != 0) {
      puVar1 = (undefined8 *)(*(long *)(param_2 + 0x10) + 0x60);
    }
    pbVar4 = (byte *)*puVar1;
    puVar3 = &DAT_cbf29ce484222645;
    bVar2 = *pbVar4;
    while (bVar2 != 0) {
      pbVar4 = pbVar4 + 1;
      puVar3 = (undefined1 *)(((ulong)puVar3 ^ (ulong)bVar2) * 0x100000001b3);
      bVar2 = *pbVar4;
    }
  }
  else if (param_1 == 1) {
    puVar1 = (undefined8 *)PTR_PTR_04379d00;
    if (*(long *)(param_2 + 0x30) != 0) {
      puVar1 = (undefined8 *)(*(long *)(param_2 + 0x30) + 0x60);
    }
    pbVar4 = (byte *)*puVar1;
    puVar3 = &DAT_cbf29ce484222645;
    bVar2 = *pbVar4;
    while (bVar2 != 0) {
      pbVar4 = pbVar4 + 1;
      puVar3 = (undefined1 *)(((ulong)puVar3 ^ (ulong)bVar2) * 0x100000001b3);
      bVar2 = *pbVar4;
    }
  }
  else {
    if (param_1 != 2) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    puVar1 = (undefined8 *)PTR_PTR_04379d00;
    if (*(long *)(param_2 + 0x50) != 0) {
      puVar1 = (undefined8 *)(*(long *)(param_2 + 0x50) + 0x60);
    }
    pbVar4 = (byte *)*puVar1;
    puVar3 = &DAT_cbf29ce484222645;
    bVar2 = *pbVar4;
    while (bVar2 != 0) {
      pbVar4 = pbVar4 + 1;
      puVar3 = (undefined1 *)(((ulong)puVar3 ^ (ulong)bVar2) * 0x100000001b3);
      bVar2 = *pbVar4;
    }
  }
  return puVar3;
}


