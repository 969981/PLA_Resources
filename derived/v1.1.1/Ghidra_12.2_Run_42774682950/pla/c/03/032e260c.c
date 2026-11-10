/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032e260c; name: FUN_032e260c
 */


undefined8 FUN_032e260c(ulong *param_1,undefined8 *param_2,code *param_3,code *param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong *puVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long local_f8 [19];
  
  if (param_3 == (code *)0x0) {
    puVar3 = param_1;
    while( true ) {
      uVar4 = (uint)*puVar3;
      if ((uVar4 >> 3 & 1) != 0) break;
      if (((*puVar3 & 1) != 0) || (puVar3 = (ulong *)puVar3[1], puVar3 == (ulong *)0x0))
      goto LAB_032e269c;
    }
    if (puVar3 != (ulong *)0x0) {
      uVar4 = (uVar4 & 7) - (uVar4 >> 1 & 1);
      uVar4 = (uVar4 >> 2 & 0x33333333) + (uVar4 & 0x33333333);
      uVar7 = puVar3[(ulong)((uVar4 + (uVar4 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2];
      goto LAB_032e26e0;
    }
LAB_032e269c:
    uVar7 = 0;
LAB_032e26e0:
    FUN_032c4d7c(param_2,uVar7,0xffffffff);
    if (*(int *)(param_2 + 1) == 1) {
      FUN_032c4d7c(param_2,"unnamed",0xffffffff);
    }
  }
  else {
    (*param_3)(param_1,param_2);
  }
  while( true ) {
    uVar4 = (uint)*param_1;
    if ((uVar4 >> 0xf & 1) != 0) break;
    if (((*param_1 & 9) != 0) || (param_1 = (ulong *)param_1[1], param_1 == (ulong *)0x0))
    goto LAB_032e2660;
  }
  uVar4 = (uVar4 & 0x7fff) - (uVar4 >> 1 & 0x1555);
  uVar4 = (uVar4 >> 2 & 0x33333333) + (uVar4 & 0x33333333);
  uVar7 = param_1[(ulong)((uVar4 + (uVar4 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2];
  if ((uVar7 != 0) && (*(short *)(uVar7 + 8) != 0)) {
    FUN_032c5d4c(param_2,&DAT_0398cc5d,0xffffffff);
    puVar1 = PTR_DAT_04389200;
    if (*(short *)(uVar7 + 8) != 0) {
      plVar8 = (long *)(uVar7 + 0x10);
      if (param_4 == (code *)0x0) {
        uVar5 = 0;
        while( true ) {
          if (*(char *)plVar8[1] == 't') {
            lVar6 = *plVar8;
            if (lVar6 == 0) {
              FUN_032c5d4c(param_2,"(null)",0xffffffff);
            }
            else {
              FUN_032c4d3c(local_f8);
              uVar2 = FUN_032e260c(lVar6,local_f8,param_3,0);
              FUN_032c5d4c(param_2,uVar2,0xffffffff);
              FUN_032c4ce8(local_f8);
            }
          }
          else {
            local_f8[0] = *plVar8;
            FUN_032c6910(param_2,&DAT_038ac0bd,puVar1,local_f8);
          }
          uVar5 = uVar5 + 1;
          plVar8 = plVar8 + 2;
          if (*(ushort *)(uVar7 + 8) <= uVar5) break;
          if (uVar5 != 0) {
            FUN_032c5d4c(param_2,&DAT_0398d5c8,0xffffffff);
          }
        }
      }
      else {
        uVar5 = 0;
        while( true ) {
          if (*(char *)plVar8[1] == 't') {
            (*param_4)(*plVar8,param_2);
          }
          else {
            local_f8[0] = *plVar8;
            FUN_032c6910(param_2,&DAT_038ac0bd,puVar1,local_f8);
          }
          uVar5 = uVar5 + 1;
          plVar8 = plVar8 + 2;
          if (*(ushort *)(uVar7 + 8) <= uVar5) break;
          if (uVar5 != 0) {
            FUN_032c5d4c(param_2,&DAT_0398d5c8,0xffffffff);
          }
        }
      }
    }
    FUN_032c5d4c(param_2,&DAT_0395c39f,0xffffffff);
  }
LAB_032e2660:
  return *param_2;
}


