/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f260fc; name: FUN_02f260fc
 */


bool FUN_02f260fc(long param_1,long param_2,uint *param_3)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  
  lVar2 = FUN_02eef860(*(undefined8 *)(param_1 + 0x10));
  uVar4 = *(uint *)(lVar2 + 0x10);
  if (param_2 == 0) {
    *param_3 = uVar4;
    bVar1 = true;
  }
  else {
    if (*param_3 <= uVar4) {
      uVar4 = *param_3;
    }
    *param_3 = uVar4;
    if (uVar4 == 0) {
      uVar4 = 0;
    }
    else {
      uVar3 = 0;
      do {
        lVar5 = uVar3 * 8;
        uVar3 = uVar3 + 1;
        *(undefined8 *)(param_2 + lVar5) = *(undefined8 *)(*(long *)(lVar2 + 8) + lVar5);
        uVar4 = *param_3;
      } while (uVar3 < uVar4);
    }
    bVar1 = uVar4 == *(uint *)(lVar2 + 0x10);
  }
  return bVar1;
}


