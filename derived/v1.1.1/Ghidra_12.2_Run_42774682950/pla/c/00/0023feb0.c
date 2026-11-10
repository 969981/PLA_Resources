/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0023feb0; name: FUN_0023feb0
 */


void FUN_0023feb0(long param_1,long param_2,undefined8 param_3)

{
  ushort *puVar1;
  long lVar2;
  undefined4 uVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 local_58;
  
  uVar10 = *(uint *)(param_1 + 0x14);
  if ((uVar10 & 3) != 0) {
    uVar5 = (int)((uint)*(byte *)(param_1 + 0x48) << 0x1c) >> 0x1c;
    if ((int)(uVar10 & 3) <= (int)uVar5) {
      uVar5 = uVar10 & 3;
    }
    if (0 < (int)uVar5) {
      lVar11 = 0;
      lVar12 = 0;
      do {
        lVar2 = *(long *)(param_1 + 0x18);
        uVar4 = *(ushort *)(param_1 + 0x4a);
        lVar13 = *(long *)(*(long *)(param_1 + 0x20) + 0x30);
        iVar6 = FUN_00230144();
        puVar1 = (ushort *)(lVar2 + lVar11);
        uVar3 = *(undefined4 *)(lVar13 + (long)(int)(iVar6 * (uint)uVar4) * 4 + lVar12 * 4);
        uVar4 = *puVar1;
        puVar7 = (undefined8 *)
                 FUN_0022f714(*(undefined8 *)(param_2 + 0xb8),uVar4 & 3,uVar4 >> 2 & 3,
                              uVar4 >> 4 & 7,uVar4 >> 7 & 1);
        local_58 = *puVar7;
        FUN_008782ac(param_3,uVar3,4,*(long *)(puVar1 + 4) + 8,&local_58);
        lVar12 = lVar12 + 1;
        lVar11 = lVar11 + 0x10;
      } while (lVar12 < (int)uVar5);
      uVar10 = *(uint *)(param_1 + 0x14);
    }
  }
  if ((uVar10 >> 0x11 & 1) != 0) {
    uVar8 = FUN_0022fc40(*(undefined8 *)(param_1 + 0x20),*(undefined2 *)(param_1 + 0x4a));
    iVar6 = FUN_0087d8bc(uVar8,4,2,"uTexture3");
    if (-1 < iVar6) {
      uVar8 = FUN_0022d838(param_2);
      uVar9 = FUN_0022d840(param_2);
      FUN_008782ac(param_3,iVar6,4,uVar8,uVar9);
    }
  }
  return;
}


