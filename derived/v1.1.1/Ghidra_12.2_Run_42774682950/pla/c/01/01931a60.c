/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01931a60; name: FUN_01931a60
 */


long FUN_01931a60(uint *param_1,undefined4 *param_2)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  long unaff_x20;
  long lVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_100 [40];
  long *local_d8;
  long *local_b8;
  long *local_98;
  long *local_78;
  long *local_58;
  
  if (*param_1 != 0) {
    if (param_2 == (undefined4 *)0x0) {
      uVar5 = 0;
      lVar4 = 0;
      while( true ) {
        uVar2 = param_1[uVar5 + 1];
        FUN_01935500(auStack_100,(long)param_1 + lVar4 + (ulong)uVar2 + 4);
        uVar3 = FUN_0165ff30(auStack_100);
        if (local_58 != (long *)0x0) {
          (**(code **)(*local_58 + 0x20))();
        }
        if (local_78 != (long *)0x0) {
          (**(code **)(*local_78 + 0x20))();
        }
        if (local_98 != (long *)0x0) {
          (**(code **)(*local_98 + 0x20))();
        }
        if (local_b8 != (long *)0x0) {
          (**(code **)(*local_b8 + 0x20))();
        }
        if (local_d8 != (long *)0x0) {
          (**(code **)(*local_d8 + 0x20))();
        }
        if ((uVar3 & 1) != 0) break;
        uVar5 = uVar5 + 1;
        lVar4 = lVar4 + 4;
        if (*param_1 <= uVar5) {
          return 0;
        }
      }
      return (long)param_1 + lVar4 + (ulong)uVar2 + 4;
    }
    lVar4 = 0;
    uVar5 = 0;
    do {
      lVar1 = (long)param_1 + lVar4 + (ulong)param_1[uVar5 + 1] + 4;
      FUN_01935500(auStack_100,lVar1);
      uVar3 = FUN_0165ff30(auStack_100);
      if ((uVar3 & 1) == 0) {
        iVar7 = 4;
        iVar6 = 4;
      }
      else {
        iVar7 = 1;
        iVar6 = 1;
        *param_2 = (int)uVar5;
        unaff_x20 = lVar1;
      }
      if (local_58 != (long *)0x0) {
        (**(code **)(*local_58 + 0x20))();
        iVar6 = iVar7;
      }
      if (local_78 != (long *)0x0) {
        (**(code **)(*local_78 + 0x20))();
      }
      if (local_98 != (long *)0x0) {
        (**(code **)(*local_98 + 0x20))();
      }
      if (local_b8 != (long *)0x0) {
        (**(code **)(*local_b8 + 0x20))();
      }
      if (local_d8 != (long *)0x0) {
        (**(code **)(*local_d8 + 0x20))();
      }
      if (iVar6 != 4) {
        return unaff_x20;
      }
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 4;
    } while (uVar5 < *param_1);
  }
  return 0;
}


