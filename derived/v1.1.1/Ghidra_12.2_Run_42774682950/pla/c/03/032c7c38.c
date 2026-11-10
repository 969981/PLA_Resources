/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032c7c38; name: FUN_032c7c38
 */


ulong * FUN_032c7c38(ulong *param_1,char *param_2)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  size_t sVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  
  puVar3 = PTR_PTR_0434a080;
  uVar8 = *param_1;
  if ((char *)(uVar8 & 0xfffffffffffffffe) != param_2) {
    if (param_2 == (char *)0x0) {
      *param_1 = 0;
    }
    else {
      sVar4 = strlen(param_2);
      uVar1 = (int)sVar4 + 1;
      puVar5 = (undefined8 *)
               (**(code **)(*(long *)puVar3 + 0x10))
                         (puVar3,(long)((sVar4 << 0x20) + 0x1100000000) >> 0x20,0);
      *puVar5 = puVar3;
      *(uint *)(puVar5 + 1) = uVar1;
      memcpy(puVar5 + 2,param_2,(ulong)uVar1);
      *param_1 = (ulong)(puVar5 + 2) | 1;
    }
    if ((uVar8 & 1) != 0) {
      lVar2 = tpidr_el0;
      lVar7 = *(long *)(lVar2 + 0x38d490);
      if (lVar7 == 0) {
        lVar7 = FUN_0333d16c(0,1);
        *(long *)(lVar2 + 0x38d490) = lVar7;
      }
      plVar6 = *(long **)(*(long *)(lVar7 + 8) + 0x58);
      *(undefined8 *)(uVar8 - 0x11) = 0;
      (**(code **)(*plVar6 + 0x18))
                (plVar6,(undefined8 *)(uVar8 - 0x11),(long)*(int *)(uVar8 - 9) + 0x10);
    }
  }
  return param_1;
}


