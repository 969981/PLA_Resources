/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bb15d8; name: FUN_02bb15d8
 */


void FUN_02bb15d8(long param_1,long *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  undefined1 local_70 [16];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_48;
  undefined4 uStack_44;
  
  puVar4 = *(undefined4 **)(param_1 + 0x128);
  for (puVar3 = *(undefined4 **)(param_1 + 0x120); puVar3 != puVar4; puVar3 = puVar3 + 8) {
    lVar8 = *(long *)(puVar3 + 2);
    uVar1 = *puVar3;
    uVar2 = puVar3[1];
    if (lVar8 == 0) {
      local_70[0] = 0;
      local_48 = 0xffffffff;
      uStack_44 = 0xffffffff;
      local_60 = *(undefined8 *)(*param_2 + 0x62a0);
      uStack_58 = *(undefined8 *)(*param_2 + 0x62a8);
      FUN_02b9cf4c(param_2,uVar1,uVar2,local_70,&local_60,&uStack_44,&local_48);
    }
    else {
      uVar5 = *(uint *)(lVar8 + 0xa0);
      uVar10 = *(ulong *)(*(long *)(lVar8 + 0x98) + 0x138);
      uVar9 = (uint)uVar10;
      if (uVar5 < 3) {
        uVar9 = uVar9 & uVar5 - 1;
      }
      else {
        iVar6 = 0;
        if ((ulong)uVar5 != 0) {
          iVar6 = (int)(uVar10 / uVar5);
        }
        uVar9 = uVar9 - iVar6 * uVar5;
      }
      uVar7 = FUN_02bc0470((long)(int)uVar9,lVar8 + 0x58);
      local_60 = param_3;
      FUN_02bb16d4(param_2,uVar1,uVar2,uVar7,puVar3 + 4,&local_60);
    }
  }
  return;
}


