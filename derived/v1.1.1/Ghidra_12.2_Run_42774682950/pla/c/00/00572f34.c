/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00572f34; name: FUN_00572f34
 */


ulong * FUN_00572f34(ulong *param_1)

{
  ulong *__s;
  ulong uVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *local_48;
  
  uVar1 = *param_1;
  if ((uVar1 & 1) == 0) {
    local_48 = param_1 + 1;
    uVar4 = 1;
    if (uVar1 >> 1 == 1) {
LAB_00572fa4:
      __s = local_48;
      uVar1 = FUN_002e2e80(PTR_FUN_04373078,uVar4 * 0x110);
      puVar3 = (ulong *)(uVar1 + uVar4 * 0x88);
      puVar3[1] = 0;
      *puVar3 = 0;
      puVar3[3] = 0;
      puVar3[2] = 0;
      puVar3[0x10] = 0;
      puVar3[5] = 0;
      puVar3[4] = 0;
      puVar3[7] = 0;
      puVar3[6] = 0;
      puVar3[9] = 0;
      puVar3[8] = 0;
      puVar3[0xb] = 0;
      puVar3[10] = 0;
      puVar3[0xd] = 0;
      puVar3[0xc] = 0;
      puVar3[0xf] = 0;
      puVar3[0xe] = 0;
      if (uVar1 != 0) {
                    /* try { // try from 00572fe0 to 00572ff3 has its CatchHandler @ 0057308c */
        FUN_005730d0(param_1,uVar1,&local_48,uVar4);
        if (__s != (ulong *)0x0) {
          if (uVar4 != 0) {
            puVar2 = __s + uVar4 * 0x11;
            uVar5 = uVar4;
            do {
              puVar2 = puVar2 + -0x11;
              uVar5 = uVar5 - 1;
              FUN_00572d28(0,param_1,puVar2);
            } while (uVar5 != 0);
          }
          memset(__s,0xab,uVar4 * 0x88);
        }
        uVar5 = *param_1;
        if ((uVar5 & 1) != 0) {
          FUN_002e2ea0(PTR_LAB_04373088,param_1[1]);
          uVar5 = *param_1;
        }
        *param_1 = uVar5 | 1;
        param_1[1] = uVar1;
        param_1[2] = uVar4 << 1;
      }
      goto LAB_00573064;
    }
  }
  else {
    local_48 = (ulong *)param_1[1];
    uVar4 = param_1[2];
    if (uVar1 >> 1 == uVar4) goto LAB_00572fa4;
  }
  puVar3 = local_48 + (uVar1 >> 1) * 0x11;
  puVar3[0x10] = 0;
  puVar3[0xd] = 0;
  puVar3[0xc] = 0;
  puVar3[0xf] = 0;
  puVar3[0xe] = 0;
  puVar3[9] = 0;
  puVar3[8] = 0;
  puVar3[0xb] = 0;
  puVar3[10] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
  puVar3[7] = 0;
  puVar3[6] = 0;
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
LAB_00573064:
  *param_1 = *param_1 + 2;
  return puVar3;
}


