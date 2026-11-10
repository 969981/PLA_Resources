/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0021d880; name: FUN_0021d880
 */


void FUN_0021d880(long param_1,undefined8 param_2,long param_3,uint param_4,undefined8 param_5,
                 long *param_6)

{
  uint *puVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  long lStack_68;
  
  uVar11 = (ulong)*(uint *)(param_3 + 0x80);
  local_70 = *param_6;
  lStack_68 = param_6[1];
  if (*(uint *)(param_3 + 0x80) != 0) {
    uVar6 = 1;
    if ((param_4 & 1) != 0) {
      uVar6 = 2;
    }
    lVar3 = 0x60;
    if ((param_4 & 4) == 0) {
      lVar3 = 0x40;
    }
    uVar4 = param_4 >> 1 & 1;
    puVar1 = (uint *)(param_3 + 8);
    uVar8 = 7;
    uVar7 = *puVar1;
    while( true ) {
      if (uVar7 != 0) {
        uVar2 = 3;
        if ((puVar1[1] & 2) != 0) {
          uVar2 = param_4 & 1 | 4;
        }
        if ((param_4 & 4) == 0) {
          uVar2 = uVar6 & (int)(puVar1[1] << 0x1e) >> 0x1f;
        }
        uVar10 = (ulong)uVar2;
        if (uVar2 != (uint)uVar8) {
          lVar5 = nn::util::BinaryFileHeader::GetFirstBlock();
          FUN_00877958(param_2,*(undefined8 *)
                                (*(long *)(*(long *)(lVar5 + 0x20) + uVar10 * 0x40 +
                                          *(long *)(PTR_DAT_04372850 +
                                                   (ulong)*(uint *)(param_1 + 0x10) * 8)) + 0x68),
                       0x3f);
          FUN_00877904(param_2,param_1 + uVar10 * 0x20 + 0x90);
          local_80 = 0;
          uStack_78 = 0;
          FUN_00877434(param_1 + 0x270,&local_80);
          lVar5 = param_1 + uVar10 * 4;
          FUN_00877a64(param_2,*(undefined4 *)(lVar5 + 0x14),&local_80,0x1c,0x70);
          FUN_00878324(param_2,*(undefined4 *)(lVar5 + 0x14),0,param_5,0x80);
          FUN_00878324(param_2,*(undefined4 *)(lVar5 + 0x44),4,param_5,0x80);
          uVar7 = *puVar1;
          uVar8 = uVar10;
        }
        lVar5 = param_1 + (ulong)uVar2 * 4;
        lVar9 = lVar3 * (ulong)uVar7 << (ulong)uVar4;
        FUN_00878390(param_2,*(undefined4 *)(lVar5 + 0x2c),0,&local_70,lVar9);
        local_70 = local_70 + lVar9;
        FUN_008782ac(param_2,*(undefined4 *)(lVar5 + 0x74),4,*(long *)(puVar1 + -2) + 0x20,
                     param_1 + 0x408);
        local_80 = 0;
        uStack_78 = 0;
        lVar9 = param_1 + 0x348;
        if ((puVar1[1] & 1) != 0) {
          lVar9 = param_1 + 0x300;
        }
        FUN_00877434(lVar9,&local_80);
        FUN_00878324(param_2,*(undefined4 *)(lVar5 + 0x5c),4,&local_80,4);
        local_80 = 0;
        uStack_78 = 0;
        FUN_00877434(param_1 + 0x2b8,&local_80);
        FUN_008775f4(param_2,3,1,&local_80,6,0,*puVar1 << (ulong)uVar4,0);
      }
      puVar1 = puVar1 + 4;
      uVar11 = uVar11 - 1;
      if (uVar11 == 0) break;
      uVar7 = *puVar1;
    }
  }
  return;
}


