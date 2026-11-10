/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00166d60; name: FUN_00166d60
 */


void FUN_00166d60(long param_1,long *param_2,int param_3)

{
  int iVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  undefined4 uVar5;
  long *plVar6;
  int iVar7;
  long lVar8;
  long *local_60;
  uint local_58 [2];
  ulong local_50;
  
  plVar6 = param_2 + 1;
  if (2 < (int)*plVar6 - 8U) {
                    /* WARNING: Subroutine does not return */
    FUN_0016a180(param_1,"syntax error");
  }
  if (*(int *)(param_1 + 0x10) != 0x3d) {
    if (*(int *)(param_1 + 0x10) != 0x2c) {
      FUN_00166920(param_1,0x3d);
      goto LAB_00166f94;
    }
    FUN_0016a400(param_1);
    local_60 = param_2;
    FUN_00165e50(param_1,local_58);
    if (local_58[0] != 10) {
      lVar8 = *(long *)(param_1 + 0x30);
      bVar4 = false;
      bVar2 = *(byte *)(lVar8 + 0x3c);
      iVar7 = (int)param_2[1];
      do {
        if (iVar7 == 10) {
          if ((local_58[0] == *(byte *)((long)param_2 + 0x13)) &&
             ((uint)local_50 == *(byte *)((long)param_2 + 0x12))) {
            bVar4 = true;
            *(undefined1 *)((long)param_2 + 0x13) = 8;
            *(byte *)((long)param_2 + 0x12) = bVar2;
          }
          if ((local_58[0] != 8) || ((uint)local_50 != (int)(short)param_2[2])) goto LAB_00166df0;
          bVar4 = true;
          *(ushort *)(param_2 + 2) = (ushort)bVar2;
          param_2 = (long *)*param_2;
        }
        else {
LAB_00166df0:
          param_2 = (long *)*param_2;
        }
        if (param_2 == (long *)0x0) goto LAB_00166e54;
        iVar7 = *(int *)(param_2 + 1);
      } while( true );
    }
    goto LAB_00166e80;
  }
  FUN_0016a400(param_1);
  FUN_00165360(param_1,&local_60,0);
  iVar7 = 1;
  iVar1 = *(int *)(param_1 + 0x10);
  while (iVar1 == 0x2c) {
    FUN_0016a400(param_1);
    FUN_00167c00(*(undefined8 *)(param_1 + 0x30),&local_60);
    FUN_00165360(param_1,&local_60,0);
    iVar7 = iVar7 + 1;
    iVar1 = *(int *)(param_1 + 0x10);
  }
  if (iVar7 == param_3) {
    FUN_00167a60(*(undefined8 *)(param_1 + 0x30),&local_60);
    lVar8 = *(long *)(param_1 + 0x30);
    goto LAB_00166f54;
  }
  FUN_00166c80(param_1,param_3,iVar7,&local_60);
LAB_00166f34:
  lVar8 = *(long *)(param_1 + 0x30);
  local_50 = 0xffffffffffffffff;
  local_60 = (long *)CONCAT44(local_60._4_4_,7);
  local_58[0] = *(byte *)(lVar8 + 0x3c) - 1;
LAB_00166f54:
  FUN_001685f0(lVar8,plVar6,&local_60);
  return;
LAB_00166e54:
  if (bVar4) {
    uVar5 = 0;
    if (local_58[0] != 8) {
      uVar5 = 5;
    }
    FUN_00167040(lVar8,uVar5,bVar2,local_50 & 0xffffffff,0);
    FUN_00167750(lVar8,1);
  }
LAB_00166e80:
  if (200 < (int)((uint)*(ushort *)(*(long *)(param_1 + 0x38) + 0xc6) + param_3)) {
LAB_00166f94:
    FUN_00163bb0(*(undefined8 *)(param_1 + 0x30),200,"C levels");
                    /* WARNING: Does not return */
    pcVar3 = (code *)UndefinedInstructionException(0,0x166fa8);
    (*pcVar3)();
  }
  FUN_00166d60(param_1,&local_60,param_3 + 1);
  goto LAB_00166f34;
}


