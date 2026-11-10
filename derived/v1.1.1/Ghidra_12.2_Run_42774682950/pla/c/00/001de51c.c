/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001de51c; name: FUN_001de51c
 */


int FUN_001de51c(long *param_1,long *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined1 local_40 [16];
  
  lVar6 = *param_1;
  local_40 = FUN_001f8fb4();
  uVar1 = FUN_001ddbec(lVar6,local_40,1);
  if ((int)uVar1 < 0) {
    FUN_001f3ae0(lVar6,"Connection time-out");
    iVar4 = 0x1c;
  }
  else {
    uVar2 = FUN_001e1174(*param_2);
    *(undefined4 *)(param_1 + 0x82) = uVar2;
    lVar5 = *param_2;
    param_1[0xf] = lVar5;
    param_1[0x10] = 0;
    param_1[0x4c] = -1;
    param_1[0x83] = (long)(int)(uVar1 >> (*(long *)(lVar5 + 0x28) != 0));
    if (lVar5 == 0) {
      iVar4 = 7;
    }
    else {
      do {
        iVar3 = FUN_001de628(param_1,lVar5,param_1 + 0x4c);
        if (iVar3 == 0) break;
        lVar5 = *(long *)(param_1[0xf] + 0x28);
        param_1[0xf] = lVar5;
      } while (lVar5 != 0);
      if ((int)param_1[0x4c] == -1) {
        iVar4 = 7;
        if (iVar3 != 0) {
          iVar4 = iVar3;
        }
      }
      else {
        *(long *)(lVar6 + 0x1630) = *(long *)(lVar6 + 0x1630) + 1;
        FUN_001e6b54(*param_1,*(undefined8 *)(lVar6 + 0x7c0),4);
        iVar4 = 0;
      }
    }
  }
  return iVar4;
}


