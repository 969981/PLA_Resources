/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00356d14; name: FUN_00356d14
 */


void FUN_00356d14(long *param_1,long param_2)

{
  undefined *puVar1;
  bool bVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  byte local_88 [16];
  undefined8 local_78;
  ulong local_70;
  ulong uStack_68;
  ulong local_60;
  
  if (param_1[0x11] != 0) {
    lVar3 = FUN_0036bb08(*param_1 + 0x30,*(undefined8 *)(param_2 + 0xb0));
    puVar1 = PTR_LAB_04373088;
    if (*param_1 + 0x38 == lVar3) {
      bVar2 = false;
      plVar7 = (long *)param_1[0xf];
      if (plVar7 == param_1 + 0x10) {
        return;
      }
    }
    else {
      bVar2 = *(char *)(lVar3 + 0x38) != '\0';
      plVar7 = (long *)param_1[0xf];
      if (plVar7 == param_1 + 0x10) {
        return;
      }
    }
    if (bVar2) {
      do {
        FUN_0034b2f0(local_88,"Import ",*(undefined8 *)plVar7[4]);
                    /* try { // try from 00356dd8 to 00356de7 has its CatchHandler @ 00356fb0 */
        puVar4 = (ulong *)FUN_002e4094(local_88," is unused.",0xb);
        uStack_68 = puVar4[1];
        local_70 = *puVar4;
        local_60 = puVar4[2];
        puVar4[1] = 0;
        puVar4[2] = 0;
        *puVar4 = 0;
        if ((local_88[0] & 1) != 0) {
          FUN_002e2ea0(puVar1,local_78);
        }
                    /* try { // try from 00356e1c to 00356e2f has its CatchHandler @ 00356f9c */
        FUN_0034db00(param_1,*(undefined8 *)plVar7[4],param_2,9,&local_70);
        if ((local_70 & 1) != 0) {
          FUN_002e2ea0(puVar1,local_60);
        }
        plVar5 = (long *)plVar7[1];
        if ((long *)plVar7[1] == (long *)0x0) {
          plVar5 = plVar7 + 2;
          plVar6 = (long *)*plVar5;
          if ((long *)*plVar6 != plVar7) {
            do {
              lVar3 = *plVar5;
              plVar5 = (long *)(lVar3 + 0x10);
              plVar6 = (long *)*plVar5;
            } while (*plVar6 != lVar3);
          }
        }
        else {
          do {
            plVar6 = plVar5;
            plVar5 = (long *)*plVar6;
          } while ((long *)*plVar6 != (long *)0x0);
        }
        plVar7 = plVar6;
      } while (plVar6 != param_1 + 0x10);
    }
    else {
      do {
        FUN_0034b2f0(local_88,"Import ",*(undefined8 *)plVar7[4]);
                    /* try { // try from 00356eac to 00356ebb has its CatchHandler @ 00356f8c */
        puVar4 = (ulong *)FUN_002e4094(local_88," is unused.",0xb);
        uStack_68 = puVar4[1];
        local_70 = *puVar4;
        local_60 = puVar4[2];
        puVar4[1] = 0;
        puVar4[2] = 0;
        *puVar4 = 0;
        if ((local_88[0] & 1) != 0) {
          FUN_002e2ea0(puVar1,local_78);
        }
                    /* try { // try from 00356ef0 to 00356f03 has its CatchHandler @ 00356f7c */
        FUN_0034e3c0(param_1,*(undefined8 *)plVar7[4],param_2,9,&local_70);
        if ((local_70 & 1) != 0) {
          FUN_002e2ea0(puVar1,local_60);
        }
        plVar5 = (long *)plVar7[1];
        if ((long *)plVar7[1] == (long *)0x0) {
          plVar5 = plVar7 + 2;
          plVar6 = (long *)*plVar5;
          if ((long *)*plVar6 != plVar7) {
            do {
              lVar3 = *plVar5;
              plVar5 = (long *)(lVar3 + 0x10);
              plVar6 = (long *)*plVar5;
            } while (*plVar6 != lVar3);
          }
        }
        else {
          do {
            plVar6 = plVar5;
            plVar5 = (long *)*plVar6;
          } while ((long *)*plVar6 != (long *)0x0);
        }
        plVar7 = plVar6;
      } while (plVar6 != param_1 + 0x10);
    }
  }
  return;
}


