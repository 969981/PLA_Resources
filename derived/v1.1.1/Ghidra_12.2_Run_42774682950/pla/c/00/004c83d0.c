/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004c83d0; name: FUN_004c83d0
 */


void FUN_004c83d0(long param_1,ushort param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(long *)(param_1 + 0xfb0);
  if (*(ushort *)(lVar1 + 2) - 1 == (uint)param_2) {
    *(undefined8 *)(lVar1 + 0x60) = *(undefined8 *)(param_1 + 4000);
    lVar1 = *(long *)(param_1 + 0xfb0);
    puVar2 = (undefined8 *)(lVar1 + 0x58);
  }
  else {
    if (*(ushort *)(lVar1 + 2) + 1 != (uint)param_2) goto LAB_004c8428;
    *(undefined8 *)(lVar1 + 0x58) = *(undefined8 *)(param_1 + 4000);
    lVar1 = *(long *)(param_1 + 0xfb0);
    puVar2 = (undefined8 *)(lVar1 + 0x60);
  }
  *(undefined8 *)(param_1 + 4000) = *puVar2;
LAB_004c8428:
  *(ushort *)(lVar1 + 2) = param_2;
  return;
}


