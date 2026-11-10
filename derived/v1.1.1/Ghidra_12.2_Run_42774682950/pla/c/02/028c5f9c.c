/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028c5f9c; name: FUN_028c5f9c
 */


void FUN_028c5f9c(long param_1,undefined8 param_2,int *param_3,undefined8 param_4,undefined8 param_5
                 )

{
  uint *puVar1;
  int *piVar2;
  long lVar3;
  ushort uVar4;
  ushort *puVar5;
  ulong uVar6;
  long *local_70 [4];
  long *local_50;
  long local_38;
  
  puVar5 = (ushort *)((long)param_3 - (long)*param_3);
  uVar4 = *puVar5;
  if (4 < uVar4) {
    uVar6 = (ulong)puVar5[2];
    lVar3 = -(long)*param_3;
    if ((uVar6 != 0) &&
       (puVar1 = (uint *)((long)param_3 + uVar6), piVar2 = (int *)((long)puVar1 + (ulong)*puVar1),
       piVar2 != (int *)0x0)) {
      if (*(ushort *)((long)piVar2 - (long)*piVar2) < 5) {
        local_38 = 0;
      }
      else {
        uVar6 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2];
        local_38 = 0;
        if (uVar6 != 0) {
          puVar1 = (uint *)((long)piVar2 + uVar6);
          local_38 = (long)puVar1 + (ulong)*puVar1;
        }
      }
      FUN_028c630c(local_70,param_4,&local_38,&DAT_03996322);
      FUN_00938764(param_1,0,local_70,0,param_2,param_5);
      if (local_50 != (long *)0x0) {
        (**(code **)(*local_50 + 0x20))();
      }
      if (local_70[0] != (long *)0x0) {
        (**(code **)(*local_70[0] + 0x20))();
      }
      lVar3 = -(long)*param_3;
      uVar4 = *(ushort *)((long)param_3 - (long)*param_3);
    }
    if (6 < uVar4) {
      uVar6 = (ulong)*(ushort *)((long)param_3 + lVar3 + 6);
      if ((uVar6 != 0) &&
         (puVar1 = (uint *)((long)param_3 + uVar6), piVar2 = (int *)((long)puVar1 + (ulong)*puVar1),
         piVar2 != (int *)0x0)) {
        if (*(ushort *)((long)piVar2 - (long)*piVar2) < 5) {
          local_38 = 0;
        }
        else {
          uVar6 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2];
          local_38 = 0;
          if (uVar6 != 0) {
            puVar1 = (uint *)((long)piVar2 + uVar6);
            local_38 = (long)puVar1 + (ulong)*puVar1;
          }
        }
        FUN_028c630c(local_70,param_4,&local_38,&DAT_03996322);
        FUN_028c68a0(param_1 + 0x30,0,local_70,0,param_2,param_5);
        if (local_50 != (long *)0x0) {
          (**(code **)(*local_50 + 0x20))();
        }
        if (local_70[0] != (long *)0x0) {
          (**(code **)(*local_70[0] + 0x20))();
        }
        lVar3 = -(long)*param_3;
        uVar4 = *(ushort *)((long)param_3 - (long)*param_3);
      }
      if (((8 < uVar4) && (uVar6 = (ulong)*(ushort *)((long)param_3 + lVar3 + 8), uVar6 != 0)) &&
         (puVar1 = (uint *)((long)param_3 + uVar6), piVar2 = (int *)((long)puVar1 + (ulong)*puVar1),
         piVar2 != (int *)0x0)) {
        if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 5) ||
           (uVar6 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2], uVar6 == 0)) {
          local_38 = 0;
        }
        else {
          puVar1 = (uint *)((long)piVar2 + uVar6);
          local_38 = (long)puVar1 + (ulong)*puVar1;
        }
        FUN_028c630c(local_70,param_4,&local_38,&DAT_03996322);
        FUN_00938764(param_1 + 0x60,0,local_70,0,param_2,param_5);
        if (local_50 != (long *)0x0) {
          (**(code **)(*local_50 + 0x20))();
        }
        if (local_70[0] != (long *)0x0) {
          (**(code **)(*local_70[0] + 0x20))();
        }
      }
    }
  }
  return;
}


