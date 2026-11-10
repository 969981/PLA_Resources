/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f36e78; name: FUN_02f36e78
 */


void FUN_02f36e78(long param_1,long param_2,undefined8 param_3,int param_4)

{
  bool bVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = DAT_0442c008;
  if (DAT_0442c008 != (long *)0x0) {
    plVar4 = (long *)DAT_0442c008[0xe];
    lVar2 = (**(code **)(*DAT_0442c008 + 0xd0))(DAT_0442c008);
    bVar1 = lVar2 == param_1;
    if (param_2 == 0) {
      if (param_4 == 0) {
        if (bVar1) {
          FUN_02f3c048(plVar3,param_3,0xffffffff);
        }
        if (plVar4 != (long *)0x0) {
          plVar3 = (long *)plVar4[0xe];
          lVar2 = (**(code **)(*plVar4 + 0xd0))(plVar4);
          if (lVar2 == param_1) {
            FUN_02f3c048(plVar4,param_3,0xffffffff);
          }
          if (plVar3 != (long *)0x0) {
            plVar4 = (long *)plVar3[0xe];
            lVar2 = (**(code **)(*plVar3 + 0xd0))(plVar3);
            if (lVar2 == param_1) {
              FUN_02f3c048(plVar3,param_3,0xffffffff);
            }
            if (plVar4 != (long *)0x0) {
              plVar3 = (long *)plVar4[0xe];
              lVar2 = (**(code **)(*plVar4 + 0xd0))(plVar4);
              if (lVar2 == param_1) {
                FUN_02f3c048(plVar4,param_3,0xffffffff);
              }
              while (plVar4 = plVar3, plVar4 != (long *)0x0) {
                plVar3 = (long *)plVar4[0xe];
                lVar2 = (**(code **)(*plVar4 + 0xd0))(plVar4);
                if (lVar2 == param_1) {
                  FUN_02f3c048(plVar4,param_3,0xffffffff);
                }
              }
            }
          }
        }
      }
      else {
        if ((bVar1) && (*(int *)(plVar3[0xc] + 0x2c) == param_4)) {
          FUN_02f3c048(plVar3,param_3,0xffffffff);
        }
        if (plVar4 != (long *)0x0) {
          plVar3 = (long *)plVar4[0xe];
          lVar2 = (**(code **)(*plVar4 + 0xd0))(plVar4);
          if ((lVar2 == param_1) && (*(int *)(plVar4[0xc] + 0x2c) == param_4)) {
            FUN_02f3c048(plVar4,param_3,0xffffffff);
          }
          if (plVar3 != (long *)0x0) {
            plVar4 = (long *)plVar3[0xe];
            lVar2 = (**(code **)(*plVar3 + 0xd0))(plVar3);
            if ((lVar2 == param_1) && (*(int *)(plVar3[0xc] + 0x2c) == param_4)) {
              FUN_02f3c048(plVar3,param_3,0xffffffff);
            }
            if (plVar4 != (long *)0x0) {
              plVar3 = (long *)plVar4[0xe];
              lVar2 = (**(code **)(*plVar4 + 0xd0))(plVar4);
              if (lVar2 != param_1) goto joined_r0x02f371ec;
              if (*(int *)(plVar4[0xc] + 0x2c) != param_4) goto joined_r0x02f371ec;
              FUN_02f3c048(plVar4,param_3,0xffffffff);
              plVar4 = plVar3;
              while (plVar4 != (long *)0x0) {
                while( true ) {
                  plVar3 = (long *)plVar4[0xe];
                  lVar2 = (**(code **)(*plVar4 + 0xd0))(plVar4);
                  if ((lVar2 == param_1) && (*(int *)(plVar4[0xc] + 0x2c) == param_4)) break;
joined_r0x02f371ec:
                  plVar4 = plVar3;
                  if (plVar4 == (long *)0x0) {
                    return;
                  }
                }
                FUN_02f3c048(plVar4,param_3,0xffffffff);
                plVar4 = plVar3;
              }
            }
          }
        }
      }
    }
    else if (param_4 == 0) {
      if ((bVar1) && (*(long *)(plVar3[0xc] + 0x30) == param_2)) {
        FUN_02f3c048(plVar3,param_3,0xffffffff);
      }
      if (plVar4 != (long *)0x0) {
        plVar3 = (long *)plVar4[0xe];
        lVar2 = (**(code **)(*plVar4 + 0xd0))(plVar4);
        if ((lVar2 == param_1) && (*(long *)(plVar4[0xc] + 0x30) == param_2)) {
          FUN_02f3c048(plVar4,param_3,0xffffffff);
        }
        if (plVar3 != (long *)0x0) {
          plVar4 = (long *)plVar3[0xe];
          lVar2 = (**(code **)(*plVar3 + 0xd0))(plVar3);
          if ((lVar2 == param_1) && (*(long *)(plVar3[0xc] + 0x30) == param_2)) {
            FUN_02f3c048(plVar3,param_3,0xffffffff);
          }
          if (plVar4 != (long *)0x0) {
            plVar3 = (long *)plVar4[0xe];
            lVar2 = (**(code **)(*plVar4 + 0xd0))(plVar4);
            if (lVar2 != param_1) goto joined_r0x02f37104;
            if (*(long *)(plVar4[0xc] + 0x30) != param_2) goto joined_r0x02f37104;
            FUN_02f3c048(plVar4,param_3,0xffffffff);
            plVar4 = plVar3;
            while (plVar4 != (long *)0x0) {
              while( true ) {
                plVar3 = (long *)plVar4[0xe];
                lVar2 = (**(code **)(*plVar4 + 0xd0))(plVar4);
                if ((lVar2 == param_1) && (*(long *)(plVar4[0xc] + 0x30) == param_2)) break;
joined_r0x02f37104:
                plVar4 = plVar3;
                if (plVar4 == (long *)0x0) {
                  return;
                }
              }
              FUN_02f3c048(plVar4,param_3,0xffffffff);
              plVar4 = plVar3;
            }
          }
        }
      }
    }
    else {
      if (((bVar1) && (*(long *)(plVar3[0xc] + 0x30) == param_2)) &&
         (*(int *)(plVar3[0xc] + 0x2c) == param_4)) {
        FUN_02f3c048(plVar3,param_3,0xffffffff);
      }
      if (plVar4 != (long *)0x0) {
        plVar3 = (long *)plVar4[0xe];
        lVar2 = (**(code **)(*plVar4 + 0xd0))(plVar4);
        if (((lVar2 == param_1) && (*(long *)(plVar4[0xc] + 0x30) == param_2)) &&
           (*(int *)(plVar4[0xc] + 0x2c) == param_4)) {
          FUN_02f3c048(plVar4,param_3,0xffffffff);
        }
        if (plVar3 != (long *)0x0) {
          plVar4 = (long *)plVar3[0xe];
          lVar2 = (**(code **)(*plVar3 + 0xd0))(plVar3);
          if (((lVar2 == param_1) && (*(long *)(plVar3[0xc] + 0x30) == param_2)) &&
             (*(int *)(plVar3[0xc] + 0x2c) == param_4)) {
            FUN_02f3c048(plVar3,param_3,0xffffffff);
          }
          if (plVar4 != (long *)0x0) {
            plVar3 = (long *)plVar4[0xe];
            lVar2 = (**(code **)(*plVar4 + 0xd0))(plVar4);
            if (lVar2 != param_1) goto joined_r0x02f3703c;
            if (*(long *)(plVar4[0xc] + 0x30) != param_2) goto joined_r0x02f3703c;
            if (*(int *)(plVar4[0xc] + 0x2c) != param_4) goto joined_r0x02f3703c;
            FUN_02f3c048(plVar4,param_3,0xffffffff);
            plVar4 = plVar3;
            while (plVar4 != (long *)0x0) {
              while( true ) {
                plVar3 = (long *)plVar4[0xe];
                lVar2 = (**(code **)(*plVar4 + 0xd0))(plVar4);
                if (((lVar2 == param_1) && (*(long *)(plVar4[0xc] + 0x30) == param_2)) &&
                   (*(int *)(plVar4[0xc] + 0x2c) == param_4)) break;
joined_r0x02f3703c:
                plVar4 = plVar3;
                if (plVar4 == (long *)0x0) {
                  return;
                }
              }
              FUN_02f3c048(plVar4,param_3,0xffffffff);
              plVar4 = plVar3;
            }
          }
        }
      }
    }
  }
  return;
}


