/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00845414; name: FUN_00845414
 */


void FUN_00845414(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  iVar1 = *(int *)(param_1 + 0x1800);
  if (0 < iVar1) {
    lVar2 = 0;
    lVar3 = param_1 + 0x10;
    do {
      lVar2 = lVar2 + 1;
      *(undefined8 *)(lVar3 + -0xc) = 0;
      *(undefined8 *)(lVar3 + -4) = 0;
      *(undefined8 *)(lVar3 + 4) = 0;
      *(undefined4 *)(lVar3 + 0xc) = 0;
      lVar3 = lVar3 + 0x30;
    } while (lVar2 < iVar1);
  }
  *(undefined8 *)(param_1 + 0x1840) = 0;
  *(undefined8 *)(param_1 + 0x18a0) = 0;
  *(undefined8 *)(param_1 + 0x1848) = 0;
  *(undefined8 *)(param_1 + 0x18a8) = 0;
  *(undefined8 *)(param_1 + 0x1850) = 0;
  *(undefined8 *)(param_1 + 0x18b0) = 0;
  *(undefined8 *)(param_1 + 0x1858) = 0;
  *(undefined8 *)(param_1 + 0x18b8) = 0;
  *(undefined8 *)(param_1 + 0x1860) = 0;
  *(undefined8 *)(param_1 + 0x18c0) = 0;
  *(undefined8 *)(param_1 + 0x1868) = 0;
  *(undefined8 *)(param_1 + 0x18c8) = 0;
  *(undefined8 *)(param_1 + 0x1870) = 0;
  *(undefined8 *)(param_1 + 0x18d0) = 0;
  *(undefined8 *)(param_1 + 0x1878) = 0;
  *(undefined8 *)(param_1 + 0x18d8) = 0;
  *(undefined4 *)(param_1 + 0x1880) = 0;
  *(undefined4 *)(param_1 + 0x18e0) = 0;
  *(undefined8 *)(param_1 + 0x1884) = 0;
  *(undefined8 *)(param_1 + 0x18e4) = 0;
  *(undefined4 *)(param_1 + 0x188c) = 0;
  *(undefined4 *)(param_1 + 0x18ec) = 0;
  *(undefined8 *)(param_1 + 0x1890) = 0;
  *(undefined8 *)(param_1 + 0x18f0) = 0;
  *(undefined8 *)(param_1 + 0x1898) = 0;
  *(undefined8 *)(param_1 + 0x18f8) = 0;
  *(undefined4 *)(param_1 + 0x1804) = 0;
  *(undefined8 *)(param_1 + 0x1828) = 0;
  *(undefined8 *)(param_1 + 0x1830) = 0;
  *(undefined8 *)(param_1 + 0x1838) = 0;
  return;
}


