/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00175390; name: FUN_00175390
 */


undefined8 FUN_00175390(double *param_1,double *param_2,int param_3)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  double dVar5;
  double dVar6;
  double local_40;
  uint local_38;
  
  uVar1 = *(uint *)(param_1 + 1);
  do {
    if (uVar1 == 0x13) {
      dVar5 = *param_1;
LAB_00175480:
      *param_2 = dVar5;
      return 1;
    }
    if (uVar1 == 3) {
      dVar6 = (double)(long)*param_1;
      dVar5 = dVar6;
      if (*param_1 != dVar6) {
        if (param_3 == 0) {
          return 0;
        }
        dVar5 = dVar6 + 1.0;
        if (param_3 < 2) {
          dVar5 = dVar6;
        }
      }
      bVar2 = false;
      if ((-9.223372036854776e+18 <= dVar5) && (bVar2 = false, !NAN(dVar5))) {
        bVar2 = dVar5 < 9.223372036854776e+18;
      }
      if (!bVar2) {
        return 0;
      }
      dVar5 = (double)(long)dVar5;
      goto LAB_00175480;
    }
    if ((uVar1 & 0xf) != 4) {
      return 0;
    }
    lVar3 = FUN_00162710((long)*param_1 + 0x18,&local_40);
    dVar5 = *param_1;
    if (*(char *)((long)dVar5 + 8) == '\x04') {
      uVar4 = (ulong)*(byte *)((long)dVar5 + 0xb);
    }
    else {
      uVar4 = *(ulong *)((long)dVar5 + 0x10);
    }
    uVar1 = local_38;
    param_1 = &local_40;
    if (lVar3 != uVar4 + 1) {
      return 0;
    }
  } while( true );
}


