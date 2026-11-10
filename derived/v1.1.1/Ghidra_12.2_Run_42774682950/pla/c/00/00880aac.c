/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00880aac; name: FUN_00880aac
 */


undefined8 FUN_00880aac(long param_1)

{
  byte *pbVar1;
  uint uVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined1 auStack_70 [4];
  undefined1 local_6c [4];
  undefined1 local_68 [8];
  undefined1 local_58 [8];
  
  pbVar1 = (byte *)(param_1 + 0x2bb0);
  *pbVar1 = 0;
  *(byte **)(param_1 + 0x2ba0) = pbVar1;
  *(undefined4 *)(param_1 + 0x2ba8) = 0x58;
  uVar4 = FUN_00880d00(param_1,local_58,*(undefined8 *)(param_1 + 0x2b78));
  if ((uVar4 & 0xff) == 0) {
    *(undefined8 *)(param_1 + 0x2bb8) = 0;
  }
  else {
    uVar5 = FUN_00880fdc(param_1,local_68);
    if ((uVar5 & 0xff) != 0) {
      uVar2 = uVar5;
      if ((uVar4 & 0xff) <= (uVar5 & 0xff)) {
        uVar2 = uVar4;
      }
      if ((uVar2 & 0xff) == 0) {
        return 1;
      }
      uVar7 = 0;
      do {
        uVar3 = local_58[uVar7];
        FUN_02947b84(*(undefined8 *)(*(long *)(param_1 + 0x2b68) + 0x98),uVar3,auStack_70,local_6c);
        uVar6 = FUN_0088103c(param_1,uVar3);
        FUN_008810fc(param_1,local_68 + uVar7,uVar5 - (int)uVar7,uVar6);
        FUN_0293d0f0(param_1 + (ulong)*pbVar1 * 8 + 0x2bb8,local_6c[0],local_68[uVar7]);
        uVar7 = uVar7 + 1;
        *pbVar1 = *pbVar1 + 1;
      } while (uVar7 < ((ulong)uVar2 & 0xff));
      return 1;
    }
    FUN_0293d110(param_1 + 0x2bb8);
  }
  *pbVar1 = 1;
  return 1;
}


