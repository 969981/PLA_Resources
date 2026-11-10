/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003ff080; name: FUN_003ff080
 */


undefined8 FUN_003ff080(int *param_1,long param_2)

{
  void *__s;
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  size_t __n;
  code *pcVar5;
  uint local_34;
  
  iVar1 = *param_1;
  if (iVar1 < 0xfefd) {
    if ((4 < iVar1 - 0x300U) && (iVar1 != 0x100)) goto LAB_003ff198;
  }
  else if ((iVar1 != 0xfeff) && (iVar1 != 0xfefd)) {
LAB_003ff198:
    uVar2 = 0x103;
    uVar3 = 0x146;
    goto LAB_003ff1fc;
  }
  *(undefined8 *)(param_2 + 0x150) = 0x20;
  if (param_1[0x19e] != 0) {
    *(undefined8 *)(param_2 + 0x150) = 0;
    return 1;
  }
  FUN_00400120(*(undefined8 *)(param_1 + 0x600));
  FUN_00400120(*(undefined8 *)(*(long *)(param_1 + 0x1ca) + 0x378));
  pcVar5 = *(code **)(param_1 + 0x14a);
  if (pcVar5 == (code *)0x0) {
    pcVar4 = *(code **)(*(long *)(param_1 + 0x1ca) + 0x198);
    pcVar5 = (code *)&LAB_003ff230;
    if (pcVar4 != (code *)0x0) {
      pcVar5 = pcVar4;
    }
  }
  FUN_00400160(*(undefined8 *)(*(long *)(param_1 + 0x1ca) + 0x378));
  FUN_00400160(*(undefined8 *)(param_1 + 0x600));
  __n = *(size_t *)(param_2 + 0x150);
  __s = (void *)(param_2 + 0x158);
  memset(__s,0,__n);
  local_34 = (uint)__n;
  iVar1 = (*pcVar5)(param_1,__s,&local_34);
  if (iVar1 == 0) {
    uVar2 = 0x12d;
    uVar3 = 0x16d;
  }
  else if ((local_34 == 0) || (*(ulong *)(param_2 + 0x150) < (ulong)local_34)) {
    uVar2 = 0x12f;
    uVar3 = 0x177;
  }
  else {
    *(ulong *)(param_2 + 0x150) = (ulong)local_34;
    iVar1 = FUN_004c2c50(param_1,__s);
    if (iVar1 == 0) {
      return 1;
    }
    uVar2 = 0x12e;
    uVar3 = 0x17f;
  }
LAB_003ff1fc:
  FUN_004c99a0(param_1,0x50,0x223,uVar2,"external/openssl/ssl/ssl_sess.c",uVar3);
  return 0;
}


