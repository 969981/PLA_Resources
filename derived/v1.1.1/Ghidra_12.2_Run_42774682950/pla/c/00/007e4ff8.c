/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007e4ff8; name: FUN_007e4ff8
 */


undefined8 FUN_007e4ff8(long *param_1,int param_2)

{
  long lVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ushort local_130 [8];
  undefined1 auStack_120 [16];
  undefined4 local_110 [37];
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined4 local_70 [2];
  undefined4 *local_68;
  undefined4 local_60;
  undefined *local_58;
  undefined4 local_50;
  uint local_44;
  int local_40 [4];
  
  local_40[0] = 0;
  local_110[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_110);
  local_44 = 0;
  memset((void *)*param_1,0,0x458);
  memset((void *)param_1[1],0,0x498);
  memset((void *)param_1[2],0,0x2750);
  local_70[0] = 1;
  local_50 = 0x10;
  local_60 = 0xc;
  if (param_2 != 0) {
    return 2;
  }
  FUN_007eb3c4(&DAT_043a3608,0);
  memcpy(&DAT_043a3618,PTR_DAT_043773b8,0x448);
  DAT_043a360a = DAT_043a360a & 0xfc;
  FUN_007eb454(local_110,&DAT_043a3608,*param_1,&local_44,0x458);
  FUN_007ee660(local_40,local_110);
  local_68 = &local_7c;
  local_7c = DAT_043a360e;
  uStack_78 = DAT_043a3612;
  local_58 = &UNK_03a7166a + ((ulong)DAT_043a3616 & 0xf) * 0x10;
  local_74 = 0xfa85d05b;
  if (local_40[0] != 0) {
    return 2;
  }
  if (local_44 < 0x11) {
    return 2;
  }
  FUN_007ee02c(local_110);
  FUN_007ee040(auStack_120,local_110,param_1[2],0x2750);
  FUN_007ee660(local_40,auStack_120);
  if (local_40[0] == 0) {
    FUN_007ee0dc(auStack_120,local_110,param_1[1],0x498,9,9,2);
    FUN_007ee660(local_40,auStack_120);
    if (local_40[0] == 0) {
      FUN_007ee238(auStack_120,local_110,*param_1 + 0x10,local_44 - 0x10);
      FUN_007ee660(local_40,auStack_120);
      if (local_40[0] != 0) goto LAB_007e51e0;
      FUN_007ee360(auStack_120,local_110,local_130);
      FUN_007ee660(local_40,auStack_120);
      uVar4 = (uint)local_130[0];
      if (local_40[0] != 0) {
        uVar4 = 0;
      }
      uVar9 = (ulong)uVar4;
    }
    else {
LAB_007e51e0:
      uVar9 = 0;
    }
    FUN_007ee214(local_110);
    FUN_007ee0d0(local_110);
    uVar4 = (uint)uVar9;
    if (uVar4 != 0) {
      uVar2 = uVar4 + 0x10 & 0x1fff0;
      uVar8 = (ulong)uVar2;
      if (0x4d0 < uVar2 + 0x20) {
        uVar7 = 1;
        goto LAB_007e515c;
      }
      FUN_007ed3a0(*param_1 + 4,uVar9);
      if (uVar4 < uVar2) {
        bVar3 = ~*(byte *)(param_1[1] + (ulong)(uVar4 - 1));
        *(byte *)(param_1[1] + uVar9) = bVar3;
        uVar5 = uVar9 + 1;
        if (uVar5 != uVar8) {
          if ((uVar9 & 3) != 3) {
            uVar6 = uVar9 & 3 ^ 3;
            do {
              *(byte *)(param_1[1] + uVar5) = bVar3;
              uVar5 = uVar5 + 1;
              uVar6 = uVar6 - 1;
            } while (uVar6 != 0);
          }
          if (2 < (uVar8 - uVar9) - 2) {
            do {
              *(byte *)(param_1[1] + uVar5) = bVar3;
              *(byte *)(param_1[1] + uVar5 + 1) = bVar3;
              *(byte *)(param_1[1] + uVar5 + 2) = bVar3;
              lVar1 = param_1[1] + uVar5;
              uVar5 = uVar5 + 4;
              *(byte *)(lVar1 + 3) = bVar3;
            } while (uVar8 != uVar5);
          }
        }
      }
      memset((void *)(*param_1 + 0x10),0,0x448);
      FUN_007e68d0(local_130,*param_1 + 0x10,param_1[1],uVar8,auStack_120,0x10,local_70);
      FUN_007ee660(local_40,local_130);
      if (local_40[0] == 0) {
        memcpy((void *)(*param_1 + uVar8 + 0x10),auStack_120,0x10);
        uVar7 = 0;
        *(uint *)(param_1 + 3) = uVar2 + 0x20;
        goto LAB_007e515c;
      }
    }
  }
  uVar7 = 2;
LAB_007e515c:
  FUN_007ee03c(local_110);
  return uVar7;
}


