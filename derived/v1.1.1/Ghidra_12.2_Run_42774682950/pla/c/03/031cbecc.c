/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031cbecc; name: FUN_031cbecc
 */


void FUN_031cbecc(long param_1,undefined4 param_2,long param_3,long param_4)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  undefined4 local_48 [2];
  
  local_48[0] = param_2;
  lVar1 = FUN_031cf710((long *)(param_1 + 0xd0),local_48);
  if (lVar1 == 0) {
    uVar4 = 0;
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = *(uint *)(lVar1 + 4);
    uVar4 = ((int)lVar1 - (int)*(undefined8 *)(param_1 + 0xe0)) * 0x20000000;
  }
  if (param_3 != param_4) {
    lVar5 = *(long *)(param_1 + 0xd0);
    lVar1 = tpidr_el0;
    do {
      FUN_031cbfe8(param_1,lVar5 + (long)(int)(uVar2 | uVar4) * 0x30 + 8,param_3);
      lVar6 = (long)DAT_0444b53c;
      lVar3 = *(long *)(lVar1 + 0x38d490);
      if (lVar3 == 0) {
        lVar3 = FUN_0333d16c(0,1);
        *(long *)(lVar1 + 0x38d490) = lVar3;
      }
      if (*(long *)(lVar3 + lVar6 * 8 + 0x18) != 0) {
        FUN_0332a954();
      }
      param_3 = param_3 + 0x90;
    } while (param_4 != param_3);
  }
  return;
}


