/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0015df60; name: FUN_0015df60
 */


void FUN_0015df60(long param_1,int param_2)

{
  undefined8 uVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  int iVar5;
  undefined8 *puVar6;
  char *pcVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  undefined8 *local_50;
  uint local_48;
  undefined4 uStack_44;
  
  lVar10 = *(long *)(param_1 + 0x18);
  local_50 = *(undefined8 **)(lVar10 + 0x98);
  *(undefined8 *)(lVar10 + 0x98) = *local_50;
  *local_50 = *(undefined8 *)(lVar10 + 0x58);
  *(undefined8 **)(lVar10 + 0x58) = local_50;
  bVar2 = *(byte *)((long)local_50 + 9);
  *(byte *)((long)local_50 + 9) = bVar2 & 0xf7;
  if (*(byte *)(lVar10 + 0x55) - 2 < 4) {
    *(byte *)((long)local_50 + 9) = bVar2 & 0xf0 | *(byte *)(lVar10 + 0x54) & 3;
  }
  local_48 = *(byte *)(local_50 + 1) | 0x40;
  puVar6 = (undefined8 *)FUN_00173900(param_1,&local_50,2);
  if ((puVar6 != (undefined8 *)0x0) && ((*(uint *)(puVar6 + 1) & 0xf) == 6)) {
    uVar3 = *(undefined1 *)(param_1 + 0xcc);
    uVar4 = *(undefined1 *)(lVar10 + 0x57);
    *(undefined1 *)(param_1 + 0xcc) = 0;
    *(undefined1 *)(lVar10 + 0x57) = 0;
    puVar8 = *(undefined8 **)(param_1 + 0x10);
    uVar1 = puVar6[1];
    *puVar8 = *puVar6;
    puVar8[1] = uVar1;
    lVar9 = *(long *)(param_1 + 0x10);
    *(undefined8 **)(lVar9 + 0x10) = local_50;
    *(ulong *)(lVar9 + 0x18) = CONCAT44(uStack_44,local_48);
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x20;
    *(ushort *)(*(long *)(param_1 + 0x20) + 0x42) =
         *(ushort *)(*(long *)(param_1 + 0x20) + 0x42) | 0x100;
    iVar5 = FUN_0015b7f0(param_1,&LAB_0015e0f0,0,
                         (*(long *)(param_1 + 0x10) - *(long *)(param_1 + 0x38)) + -0x20,0);
    *(ushort *)(*(long *)(param_1 + 0x20) + 0x42) =
         *(ushort *)(*(long *)(param_1 + 0x20) + 0x42) & 0xfeff;
    *(undefined1 *)(param_1 + 0xcc) = uVar3;
    *(undefined1 *)(lVar10 + 0x57) = uVar4;
    if (param_2 != 0) {
      if (iVar5 != 0) {
        if (iVar5 == 2) {
          if ((*(uint *)(*(long *)(param_1 + 0x10) + -8) & 0xf) == 4) {
            pcVar7 = (char *)(*(long *)(*(long *)(param_1 + 0x10) + -0x10) + 0x18);
          }
          else {
            pcVar7 = "no message";
          }
          FUN_00162fa0(param_1,"error in __gc metamethod (%s)",pcVar7);
          iVar5 = 5;
        }
                    /* WARNING: Subroutine does not return */
        FUN_0015a320(param_1,iVar5);
      }
    }
  }
  return;
}


