/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0113375c; name: FUN_0113375c
 */


void FUN_0113375c(long param_1,uint param_2)

{
  int iVar1;
  ushort *puVar2;
  long lVar3;
  ushort uVar4;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  if ((int)param_2 < 0x3d5) {
    lVar3 = param_1 + 0x6c + (ulong)param_2 * 0x58;
    *(uint *)(lVar3 + 0x70) = *(uint *)(lVar3 + 0x70) | 1;
    if (*(ushort *)(lVar3 + 0x7c) == 0) {
      uVar4 = *(ushort *)(param_1 + 0x72);
      if (uVar4 >> 5 < 0x753) {
        uVar4 = uVar4 + 1;
        *(ushort *)(param_1 + 0x72) = uVar4;
      }
      *(ushort *)(lVar3 + 0x7c) = uVar4;
    }
    puVar2 = (ushort *)(param_1 + 0x6c + (ulong)param_2 * 0x58 + 0x9e);
    uVar4 = *puVar2;
    if (uVar4 >> 5 < 0x753) {
      iVar1 = uVar4 + 1;
      *puVar2 = (ushort)iVar1;
      local_20 = 0;
      uStack_18 = 0;
      local_28 = 0;
      FUN_0113442c(param_1,0xb,iVar1,&local_28);
    }
  }
  return;
}


