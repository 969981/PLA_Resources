/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0052b85c; name: FUN_0052b85c
 */


void FUN_0052b85c(long param_1,long param_2,long *param_3)

{
  byte bVar1;
  byte bVar2;
  long *plVar3;
  
  plVar3 = (long *)*param_3;
  if (*plVar3 == 0) {
    bVar1 = *(byte *)(plVar3 + 2);
    if (((((bVar1 >> 3 & 1) == 0) || (*(long *)(plVar3[1] + 0x48) == 0)) &&
        (((bVar1 >> 4 & 1) == 0 || (*(long *)(plVar3[1] + 0x68) == 0)))) &&
       (((bVar1 >> 5 & 1) == 0 || (*(long *)(plVar3[1] + 0x80) == 0)))) {
      if (PTR_DAT_04374b48[0x10] == '\0') {
        bVar1 = *(byte *)(param_1 + 0x318);
      }
      else {
        FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/client_channel.cc"
                     ,0x9bd,1,"chand=%p calld=%p: clearing pending batch",
                     *(undefined8 *)(param_2 + 8),param_1);
        bVar1 = *(byte *)(param_1 + 0x318);
      }
      if ((bVar1 >> 3 & 1) != 0) {
        bVar2 = *(byte *)(*param_3 + 0x10);
        if ((bVar2 & 1) != 0) {
          bVar1 = bVar1 & 0xfe;
          *(byte *)(param_1 + 0x318) = bVar1;
          bVar2 = *(byte *)(*param_3 + 0x10);
        }
        if ((bVar2 >> 2 & 1) != 0) {
          bVar1 = bVar1 & 0xfd;
          *(byte *)(param_1 + 0x318) = bVar1;
          bVar2 = *(byte *)(*param_3 + 0x10);
        }
        if ((bVar2 >> 1 & 1) != 0) {
          *(byte *)(param_1 + 0x318) = bVar1 & 0xfb;
        }
      }
      *param_3 = 0;
      return;
    }
  }
  return;
}


