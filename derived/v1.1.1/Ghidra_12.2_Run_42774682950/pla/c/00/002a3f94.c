/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002a3f94; name: FUN_002a3f94
 */


__tree_node_base * FUN_002a3f94(long *param_1)

{
  ulong uVar1;
  size_t __n;
  __tree_node_base *__s1;
  byte bVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  void *__s2;
  __tree_node_base *p_Var6;
  long *plVar7;
  __tree_node_base *local_58 [3];
  
  FUN_002a40b0(local_58);
  p_Var6 = local_58[0];
  plVar4 = param_1 + 1;
  plVar7 = (long *)*plVar4;
  if (plVar7 != (long *)0x0) {
    uVar5 = (ulong)((byte)local_58[0][0x20] >> 1);
    __s1 = *(__tree_node_base **)(local_58[0] + 0x30);
    if (((byte)local_58[0][0x20] & 1) == 0) {
      __s1 = local_58[0] + 0x21;
    }
    else {
      uVar5 = *(ulong *)(local_58[0] + 0x28);
    }
    do {
      bVar2 = *(byte *)(plVar7 + 4);
      uVar1 = (ulong)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        uVar1 = plVar7[5];
      }
      __n = uVar1;
      if (uVar5 <= uVar1) {
        __n = uVar5;
      }
      if (__n == 0) {
LAB_002a403c:
        if (uVar5 < uVar1) goto LAB_002a4030;
LAB_002a3fe4:
        plVar4 = (long *)plVar7[1];
        if (plVar4 == (long *)0x0) {
          plVar4 = plVar7 + 1;
          goto LAB_002a405c;
        }
      }
      else {
        __s2 = (void *)plVar7[6];
        if ((bVar2 & 1) == 0) {
          __s2 = (void *)((long)plVar7 + 0x21);
        }
        iVar3 = memcmp(__s1,__s2,__n);
        if (iVar3 == 0) goto LAB_002a403c;
        if (-1 < iVar3) goto LAB_002a3fe4;
LAB_002a4030:
        plVar4 = (long *)*plVar7;
        if (plVar4 == (long *)0x0) goto LAB_002a4058;
      }
      plVar7 = plVar4;
    } while( true );
  }
  plVar7 = plVar4;
LAB_002a405c:
  *(undefined8 *)p_Var6 = 0;
  *(undefined8 *)(p_Var6 + 8) = 0;
  *(long **)(p_Var6 + 0x10) = plVar7;
  *plVar4 = (long)p_Var6;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    p_Var6 = (__tree_node_base *)*plVar4;
  }
  std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
            ((__tree_node_base *)param_1[1],p_Var6);
  param_1[2] = param_1[2] + 1;
  return local_58[0];
LAB_002a4058:
  plVar4 = plVar7;
  goto LAB_002a405c;
}


