/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011342b0; name: FUN_011342b0
 */


void FUN_011342b0(long param_1,uint param_2,undefined2 param_3,uint param_4,undefined2 param_5)

{
  int iVar1;
  long lVar2;
  ushort *puVar3;
  ushort uVar4;
  undefined1 local_60 [4];
  undefined4 local_5c;
  undefined1 local_58;
  undefined4 local_54;
  uint uStack_50;
  undefined2 local_4c;
  undefined2 local_4a;
  undefined1 local_48 [4];
  undefined4 local_44;
  undefined1 local_40;
  undefined4 local_3c;
  uint uStack_38;
  undefined2 local_34;
  undefined2 local_32;
  
  if ((int)param_2 < 0x3d5) {
    lVar2 = param_1 + (ulong)param_2 * 0x58;
    *(uint *)(lVar2 + 0xdc) = *(uint *)(lVar2 + 0xdc) | 1;
    if (*(ushort *)(lVar2 + 0xe8) == 0) {
      uVar4 = *(ushort *)(param_1 + 0x72);
      if (uVar4 >> 5 < 0x753) {
        uVar4 = uVar4 + 1;
        *(ushort *)(param_1 + 0x72) = uVar4;
      }
      *(ushort *)(lVar2 + 0xe8) = uVar4;
    }
  }
  if ((int)param_4 < 0x3d5) {
    lVar2 = param_1 + (ulong)param_4 * 0x58;
    *(uint *)(lVar2 + 0xdc) = *(uint *)(lVar2 + 0xdc) | 1;
    if (*(ushort *)(lVar2 + 0xe8) == 0) {
      uVar4 = *(ushort *)(param_1 + 0x72);
      if (uVar4 >> 5 < 0x753) {
        uVar4 = uVar4 + 1;
        *(ushort *)(param_1 + 0x72) = uVar4;
      }
      *(ushort *)(lVar2 + 0xe8) = uVar4;
    }
  }
  if ((int)param_2 < 0x3d5) {
    puVar3 = (ushort *)(param_1 + 0x6c + (ulong)param_2 * 0x58 + 0x90);
    if (*puVar3 >> 5 < 0x753) {
      *puVar3 = *puVar3 + 1;
      *(undefined8 *)(param_1 + 0x1f440) = 0;
      local_3c = 0;
      local_48[0] = 0;
      local_44 = 0;
      local_40 = 0;
      local_32 = 0;
      uStack_38 = param_2;
      local_34 = param_3;
      FUN_0113442c(param_1,4,*puVar3,local_48);
    }
  }
  if ((int)param_4 < 0x3d5) {
    puVar3 = (ushort *)(param_1 + 0x6c + (ulong)param_4 * 0x58 + 0x90);
    uVar4 = *puVar3;
    if (uVar4 >> 5 < 0x753) {
      iVar1 = uVar4 + 1;
      *puVar3 = (ushort)iVar1;
      local_60[0] = 0;
      local_5c = 0;
      local_58 = 0;
      local_54 = 0;
      local_4a = 0;
      uStack_50 = param_4;
      local_4c = param_5;
      FUN_0113442c(param_1,4,iVar1,local_60);
    }
  }
  return;
}


