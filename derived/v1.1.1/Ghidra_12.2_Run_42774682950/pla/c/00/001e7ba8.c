/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001e7ba8; name: FUN_001e7ba8
 */


int FUN_001e7ba8(long *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  long *plVar6;
  undefined1 auVar7 [16];
  long local_48;
  
  auVar7 = FUN_001f8fb4();
  uVar4 = auVar7._8_8_;
  uVar2 = auVar7._0_8_;
  if ((param_1 == (long *)0x0) || (*param_1 != 0xbab1e)) {
    iVar5 = 1;
  }
  else if ((char)param_1[0x3c] == '\0') {
    plVar6 = (long *)param_1[1];
    if (plVar6 == (long *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = 0;
      do {
        iVar1 = FUN_001e7cac(param_1,uVar2,uVar4,plVar6);
        plVar6 = (long *)*plVar6;
        if (iVar1 != 0) {
          iVar5 = iVar1;
        }
      } while (plVar6 != (long *)0x0);
    }
    do {
      lVar3 = FUN_001f897c(uVar2,uVar4,param_1[0x16],&local_48);
      param_1[0x16] = lVar3;
      if (local_48 == 0) break;
      FUN_001e8d00(uVar2,uVar4,param_1,*(undefined8 *)(local_48 + 0x30));
    } while (local_48 != 0);
    *param_2 = *(undefined4 *)((long)param_1 + 0x1c);
    if (iVar5 < 1) {
      FUN_001e6d28(param_1);
    }
  }
  else {
    iVar5 = 8;
  }
  return iVar5;
}


