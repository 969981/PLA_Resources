/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00507c58; name: thunk_FUN_005095f0
 */


void thunk_FUN_005095f0(ulong *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *__s;
  ulong *puVar4;
  ulong *__s_00;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uStack_68;
  
  puVar1 = PTR_LAB_04373088;
  uVar2 = *param_1;
  if ((uVar2 & 1) == 0) {
    __s = param_1 + 1;
  }
  else {
    __s = (ulong *)param_1[1];
    if (__s == (ulong *)0x0) goto LAB_0050974c;
  }
  if (uVar2 >> 1 != 0) {
    uStack_68 = uVar2 >> 1;
    do {
      uStack_68 = uStack_68 - 1;
      puVar4 = (ulong *)__s[uStack_68];
      __s[uStack_68] = 0;
      if (puVar4 != (ulong *)0x0) {
        uVar3 = *puVar4;
        if ((uVar3 & 1) == 0) {
          __s_00 = puVar4 + 1;
joined_r0x005096a8:
          if (uVar3 >> 1 != 0) {
            uVar6 = uVar3 >> 1;
            do {
              uVar7 = uVar6 - 1;
              puVar5 = (undefined8 *)__s_00[uVar6 - 1];
              __s_00[uVar6 - 1] = 0;
              if (puVar5 != (undefined8 *)0x0) {
                (**(code **)*puVar5)(puVar5);
                FUN_002e2ea0(puVar1,puVar5);
              }
              uVar6 = uVar7;
            } while (uVar7 != 0);
          }
          memset(__s_00,0xab,(uVar3 >> 1) << 3);
          if ((*puVar4 & 1) != 0) {
            uVar3 = puVar4[1];
            goto LAB_00509658;
          }
        }
        else {
          __s_00 = (ulong *)puVar4[1];
          if (__s_00 != (ulong *)0x0) goto joined_r0x005096a8;
          uVar3 = 0;
LAB_00509658:
          FUN_002e2ea0(puVar1,uVar3);
        }
        FUN_002e2ea0(puVar1,puVar4);
      }
    } while (uStack_68 != 0);
  }
  uStack_68 = uVar2 >> 1;
  memset(__s,0xab,uStack_68 << 3);
  if ((*param_1 & 1) == 0) {
    return;
  }
LAB_0050974c:
  FUN_002e2ea0(PTR_LAB_04373088,param_1[1]);
  return;
}


