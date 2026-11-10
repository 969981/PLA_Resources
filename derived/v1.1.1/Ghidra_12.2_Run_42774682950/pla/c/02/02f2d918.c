/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f2d918; name: FUN_02f2d918
 */


ulong FUN_02f2d918(undefined8 param_1,long param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  int local_58;
  int iStack_54;
  undefined1 auStack_50 [8];
  short *local_48;
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  
  uVar1 = *(uint *)(param_2 + 0x2d0);
  lVar4 = *(long *)(param_2 + 0x230);
  if (*(long *)(param_2 + 0x2c8) != 0 && uVar1 != 0) {
    uVar2 = FUN_02ead870(*(long *)(param_2 + 0x2c8),uVar1,auStack_50,0,auStack_34,auStack_38,
                         &iStack_54,&local_58,0,0,1);
    if (uVar2 != 1) {
      FUN_02ecdea4(param_2,1);
      return (ulong)uVar2;
    }
    if (*local_48 == -2) {
      *(undefined4 *)(lVar4 + 0x18) = 0x10001;
    }
    if ((uint)(iStack_54 + local_58) <= uVar1) {
      *(ushort *)(lVar4 + 0xc) = *(ushort *)(lVar4 + 0xc) & 0xff8f | 0xc;
    }
  }
  if ((((*(ushort *)(lVar4 + 0xc) & 0x7c) == 0xc) && (*(long *)(param_2 + 0x2c8) == 0)) ||
     (lVar4 = FUN_02f30068(*(ushort *)(lVar4 + 0xc) >> 2 & 0x1f,*(undefined4 *)(lVar4 + 0x18),
                           param_2), lVar4 == 0)) {
    FUN_02ecdea4(param_2,1);
    uVar3 = 2;
  }
  else {
    uVar3 = FUN_02f2da48(param_1,lVar4,param_3 & 1,1);
  }
  return uVar3;
}


