/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001ed2b8; name: FUN_001ed2b8
 */


undefined8 FUN_001ed2b8(long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  ushort uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_18;
  
  *(ushort *)(param_1 + 0x15a4) = *(ushort *)(param_1 + 0x15a4) & 0xfeff;
  if (((*(int *)(param_1 + 0x14e0) == 10) || (iVar1 = *(int *)(param_2 + 0x230), iVar1 == 10)) ||
     ((lVar4 = *(long *)(param_1 + 0xa40), iVar1 < 0xb && (lVar4 == 1)))) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    if ((lVar4 == 0 || 1 < lVar4) && (iVar1 != 0x14)) {
      local_18 = param_3;
      lVar4 = FUN_001f906c(param_2,"Expect");
      if (lVar4 == 0) {
        uVar3 = FUN_001ecb14(&local_18,"Expect: 100-continue\r\n");
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        uVar2 = *(ushort *)(param_1 + 0x15a4) | 0x100;
      }
      else {
        uVar2 = FUN_001ecccc(lVar4,"Expect:","100-continue");
        uVar3 = 0;
        uVar2 = *(ushort *)(param_1 + 0x15a4) & 0xfeff | (uVar2 & 1) << 8;
      }
      *(ushort *)(param_1 + 0x15a4) = uVar2;
    }
  }
  return uVar3;
}


