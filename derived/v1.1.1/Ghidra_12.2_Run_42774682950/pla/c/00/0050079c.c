/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0050079c; name: FUN_0050079c
 */


void FUN_0050079c(void)

{
  undefined *puVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong *__s;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  puVar2 = DAT_0439ebb0;
  puVar1 = PTR_LAB_04373088;
  if (DAT_0439ebb0 == (ulong *)0x0) {
    DAT_0439ebb0 = (ulong *)0x0;
    return;
  }
  uVar3 = *DAT_0439ebb0;
  if ((uVar3 & 1) == 0) {
    __s = DAT_0439ebb0 + 1;
joined_r0x005007e0:
    if (uVar3 >> 1 != 0) {
      uVar5 = uVar3 >> 1;
      do {
        uVar6 = uVar5 - 1;
        puVar4 = (undefined8 *)__s[uVar5 - 1];
        __s[uVar5 - 1] = 0;
        if (puVar4 != (undefined8 *)0x0) {
          (**(code **)*puVar4)(puVar4);
          FUN_002e2ea0(puVar1,puVar4);
        }
        uVar5 = uVar6;
      } while (uVar6 != 0);
    }
    memset(__s,0xab,(uVar3 >> 1) << 3);
    if ((*puVar2 & 1) == 0) goto LAB_00500860;
    uVar3 = puVar2[1];
  }
  else {
    __s = (ulong *)DAT_0439ebb0[1];
    if (__s != (ulong *)0x0) goto joined_r0x005007e0;
    uVar3 = 0;
  }
  FUN_002e2ea0(PTR_LAB_04373088,uVar3);
LAB_00500860:
  FUN_002e2ea0(PTR_LAB_04373088,puVar2);
  DAT_0439ebb0 = (ulong *)0x0;
  return;
}


