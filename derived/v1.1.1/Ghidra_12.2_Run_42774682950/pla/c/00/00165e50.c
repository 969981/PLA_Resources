/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00165e50; name: FUN_00165e50
 */


void FUN_00165e50(long param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 local_68 [2];
  undefined4 local_60;
  undefined8 local_58;
  
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  iVar1 = *(int *)(param_1 + 4);
  if (*(int *)(param_1 + 0x10) == 0x124) {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    FUN_0016a400(param_1);
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    FUN_00166640(uVar5,uVar3,param_2,1);
    if (*param_2 == 0) {
      FUN_00166640(uVar5,*(undefined8 *)(param_1 + 0x68),param_2,1);
      local_60 = FUN_001677a0(*(undefined8 *)(param_1 + 0x30),uVar3);
      local_58 = 0xffffffffffffffff;
      local_68[0] = 4;
      FUN_00168d90(uVar5,param_2,local_68);
    }
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0x28) {
LAB_001660ac:
                    /* WARNING: Subroutine does not return */
      FUN_0016a180(param_1,"unexpected symbol");
    }
    FUN_0016a400(param_1);
    FUN_00165360(param_1,param_2,0);
    if (*(int *)(param_1 + 0x10) != 0x29) {
      if (*(int *)(param_1 + 4) == iVar1) {
        FUN_00166920(param_1,0x29);
      }
      uVar3 = *(undefined8 *)(param_1 + 0x38);
      uVar4 = FUN_0016a120(param_1,0x29);
      uVar5 = FUN_0016a120(param_1,0x28);
      uVar4 = FUN_00162fa0(uVar3,"%s expected (to close %s at line %d)",uVar4,uVar5,iVar1);
                    /* WARNING: Subroutine does not return */
      FUN_0016a180(param_1,uVar4);
    }
    FUN_0016a400(param_1);
    FUN_00167ad0(*(undefined8 *)(param_1 + 0x30),param_2);
  }
  iVar2 = *(int *)(param_1 + 0x10);
  do {
    if (0x5a < iVar2) goto LAB_00165f6c;
LAB_00165fe8:
    if (iVar2 == 0x28) goto LAB_0016604c;
    if (iVar2 != 0x2e) {
      if (iVar2 != 0x3a) {
        return;
      }
      FUN_0016a400(param_1);
      if (*(int *)(param_1 + 0x10) == 0x124) {
        uVar5 = *(undefined8 *)(param_1 + 0x18);
        FUN_0016a400(param_1);
        local_60 = FUN_001677a0(*(undefined8 *)(param_1 + 0x30),uVar5);
        local_58 = 0xffffffffffffffff;
        local_68[0] = 4;
        FUN_00168710(uVar4,param_2,local_68);
        do {
          FUN_00166460(param_1,param_2,iVar1);
          iVar2 = *(int *)(param_1 + 0x10);
          while( true ) {
            if (iVar2 < 0x5b) goto LAB_00165fe8;
LAB_00165f6c:
            if (iVar2 != 0x5b) break;
            FUN_00168460(uVar4,param_2);
            FUN_0016a400(param_1);
            FUN_00165360(param_1,local_68,0);
            FUN_00168480(*(undefined8 *)(param_1 + 0x30),local_68);
            if (*(int *)(param_1 + 0x10) != 0x5d) {
              FUN_00166920(param_1,0x5d);
              goto LAB_001660a0;
            }
            FUN_0016a400(param_1);
            FUN_00168d90(uVar4,param_2,local_68);
            iVar2 = *(int *)(param_1 + 0x10);
          }
          if ((iVar2 != 0x7b) && (iVar2 != 0x125)) {
            return;
          }
LAB_0016604c:
          FUN_00167c00(uVar4,param_2);
        } while( true );
      }
LAB_001660a0:
      FUN_00166920(param_1,0x124);
      goto LAB_001660ac;
    }
    FUN_001663c0(param_1,param_2);
    iVar2 = *(int *)(param_1 + 0x10);
  } while( true );
}


