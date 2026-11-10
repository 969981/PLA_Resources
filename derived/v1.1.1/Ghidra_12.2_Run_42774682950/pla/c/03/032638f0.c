/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032638f0; name: FUN_032638f0
 */


void FUN_032638f0(long param_1,ushort param_2,ulong param_3)

{
  ushort uVar1;
  ushort *puVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x120);
  puVar2 = (ushort *)(lVar3 + (ulong)param_2 * 8 + 4);
  uVar1 = *puVar2;
  if ((uVar1 & 3) == 2) {
    *(undefined4 *)(lVar3 + (ulong)(uVar1 >> 2) * 8 + 4) =
         *(undefined4 *)(lVar3 + (param_3 & 0xffff) * 8 + 4);
  }
  uVar1 = *(ushort *)(lVar3 + (param_3 & 0xffff) * 8 + 4);
  if ((uVar1 & 3) == 2) {
    *(undefined4 *)(*(long *)(param_1 + 0x120) + (ulong)(uVar1 >> 2) * 8 + 4) =
         *(undefined4 *)puVar2;
  }
  return;
}


