/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0021f078; name: FUN_0021f078
 */


void FUN_0021f078(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  uint uVar4;
  
  if ((char)param_1[8] == '\0') {
    lVar1 = param_1[3] + (ulong)*(uint *)(param_1[4] + 0xc);
    uVar2 = (**(code **)(*param_1 + 0x120))();
    if (*(uint *)(lVar1 + 0x14) == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = param_1[3] + (ulong)*(uint *)(lVar1 + 0x14);
    }
    FUN_0021f4b4(param_1 + 5,lVar3,*(undefined2 *)(lVar1 + 10),*(undefined2 *)(lVar1 + 0x10),
                 *(undefined2 *)(lVar1 + 0x12),uVar2,1);
    uVar4 = (uint)*(ushort *)((long)param_1 + 0x3c);
    if (((uVar4 & 0x3ffc) < 0x14) &&
       ((7 < (uVar4 & 0x3fff) || ((1 << (ulong)(uVar4 & 0x1f) & 0xc2U) == 0)))) {
      FUN_0021f204(param_1 + 5,param_2,param_1[0xd],(param_1[6] - param_1[2]) + param_1[0xe],
                   param_1[0xf]);
      return;
    }
  }
  return;
}


