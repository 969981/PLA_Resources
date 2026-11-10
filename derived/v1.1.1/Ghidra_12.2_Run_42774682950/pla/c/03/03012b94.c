/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03012b94; name: FUN_03012b94
 */


ulong * FUN_03012b94(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  size_t sVar4;
  undefined8 *puVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  char *__s;
  
  puVar3 = PTR_PTR_0434a080;
  __s = (char *)(*param_2 & 0xfffffffffffffffe);
  uVar10 = *param_1;
  if ((char *)(uVar10 & 0xfffffffffffffffe) != __s) {
    if (__s == (char *)0x0) {
      *param_1 = 0;
    }
    else {
      sVar4 = strlen(__s);
      uVar1 = (int)sVar4 + 1;
      puVar5 = (undefined8 *)
               (**(code **)(*(long *)puVar3 + 0x10))
                         (puVar3,(long)((sVar4 << 0x20) + 0x1100000000) >> 0x20,0);
      *puVar5 = puVar3;
      *(uint *)(puVar5 + 1) = uVar1;
      memcpy(puVar5 + 2,__s,(ulong)uVar1);
      *param_1 = (ulong)(puVar5 + 2) | 1;
    }
    if ((uVar10 & 1) != 0) {
      lVar2 = tpidr_el0;
      lVar8 = *(long *)(lVar2 + 0x38d490);
      if (lVar8 == 0) {
        lVar8 = FUN_0333d16c(0,1);
        *(long *)(lVar2 + 0x38d490) = lVar8;
      }
      plVar6 = *(long **)(*(long *)(lVar8 + 8) + 0x58);
      *(undefined8 *)(uVar10 - 0x11) = 0;
      (**(code **)(*plVar6 + 0x18))
                (plVar6,(undefined8 *)(uVar10 - 0x11),(long)*(int *)(uVar10 - 9) + 0x10);
    }
  }
  uVar10 = param_1[1];
  uVar7 = param_2[1];
  if (uVar10 != uVar7) {
    uVar9 = 0;
    if (uVar7 != 0) {
      FUN_032d645c(uVar7);
      uVar10 = param_1[1];
      uVar9 = param_2[1];
    }
    param_1[1] = uVar9;
    if (uVar10 != 0) {
      FUN_032d647c();
    }
  }
  uVar10 = param_2[2];
  uVar7 = param_2[3];
  uVar9 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar9;
  param_1[2] = uVar10;
  param_1[3] = uVar7;
  uVar10 = param_2[6];
  uVar7 = param_2[7];
  uVar9 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar9;
  param_1[6] = uVar10;
  param_1[7] = uVar7;
  return param_1;
}


